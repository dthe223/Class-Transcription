# Use watson with prerecorded audio file

from watson_developer_cloud import SpeechToTextV1
import json

stt = SpeechToTextV1(username, password)

audio_file = open("algorithms-book.flac", "rb")

print json.dumps(stt.recognize(audio_file, content_type="audio/flac"), indent=2)
