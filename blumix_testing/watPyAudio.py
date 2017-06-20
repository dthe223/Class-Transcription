from ws4py.client.threadedclient import WebSocketClient
import base64, json, ssl, subprocess, threading, time, pyaudio

class SpeechToTextClient(WebSocketClient):
    def __init__(self):
        ws_url = "wss://stream.watsonplatform.net/speech-to-text/api/v1/recognize"

        auth_string = "%s:%s" % (username, password)
        base64string = base64.encodestring(auth_string).replace("\n", "")

        self.listening = False

        try:
            WebSocketClient.__init__(self, ws_url, headers=[("Authorization", "Basic %s" % base64string)])
            self.connect()
        except: print ("Failed to open WebSocket.")

    def opened(self):
        self.send('{"action": "start", "content-type": "audio/l16;rate=16000"}')
        self.stream_audio_thread = threading.Thread(target=self.stream_audio)
        self.stream_audio_thread.start()

    def received_message(self, message):
        message = json.loads(str(message))
        if "state" in message:
            if message["state"] == "listening":
                self.listening = True
        print ("Message received: " + str(message))

    def stream_audio(self):
        while not self.listening:
            time.sleep(0.1)

        p = pyaudio.PyAudio()
        stream = p.open(format=pyaudio.paInt16, channels=1, rate=16000, input=True, frames_per_buffer=1024)

        while self.listening:
            data = stream.read(2048)

            try:
                self.send(bytearray(data), binary=True)
            except ssl.SSLError:
                pass

    def close_connection(self):
        self.listening = False
        self.stream_audio_thread.join()
        WebSocketClient.close(self)

try:
    stt_client = SpeechToTextClient()
    raw_input()
finally:
    stt_client.close()
