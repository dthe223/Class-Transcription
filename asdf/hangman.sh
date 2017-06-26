#!/bin/bash

function separation
{
	echo ''
	echo ''
	echo ''
	echo ''
	echo ''
	echo ' /////////////////////////////////////////////////// '
	echo ' /                    ___                          / '
	echo ' /  |   |  /\  |\  ||         /\  /\    /\  |\  |  / '
	echo ' /  |---| /--\ | \ || ---    /  \/  \  /--\ | \ |  / '
	echo ' /  |   |/    \|  \||___|   /        \/    \|  \|  / '
	echo ' /                                                 / '
	echo ' /////////////////////////////////////////////////// '
	echo ''
}
function all
{
	echo '                      ==============||        '
	echo '                       |            ||        '
	echo '                       |            ||        '
	echo '                      ,-,           ||        '
	echo '                     (   )          ||        '
	echo '                      `-`           ||        '
	echo '                       |            ||        '
	echo '                      /|\           ||        '
	echo '                     / | \          ||        '
	echo '                    /  |  \         ||        '
	echo '                       |            ||        '
	echo '                      / \           ||        '
	echo '                     /   \          ||        '
	echo '                    /     \         ||        '
	echo '                   /       \      _===_       '
	echo '                             ____-     -____  '
}
function noRightLeg
{
	echo '                      ==============||        '
	echo '                       |            ||        '
	echo '                       |            ||        '
	echo '                      ,-,           ||        '
	echo '                     (   )          ||        '
	echo '                      `-`           ||        '
	echo '                       |            ||        '
	echo '                      /|\           ||        '
	echo '                     / | \          ||        '
	echo '                    /  |  \         ||        '
	echo '                       |            ||        '
	echo '                        \           ||        '
	echo '                         \          ||        '
	echo '                          \         ||        '
	echo '                           \      _===_       '
	echo '                             ____-     -____  '
}
function noLegs
{
	echo '                      ==============||        '
	echo '                       |            ||        '
	echo '                       |            ||        '
	echo '                      ,-,           ||        '
	echo '                     (   )          ||        '
	echo '                      `-`           ||        '
	echo '                       |            ||        '
	echo '                      /|\           ||        '
	echo '                     / | \          ||        '
	echo '                    /  |  \         ||        '
	echo '                       |            ||        '
	echo '                                    ||        '
	echo '                                    ||        '
	echo '                                    ||        '
	echo '                                  _===_       '
	echo '                             ____-     -____  '
}
function noRightArm
{
	echo '                      ==============||        '
	echo '                       |            ||        '
	echo '                       |            ||        '
	echo '                      ,-,           ||        '
	echo '                     (   )          ||        '
	echo '                      `-`           ||        '
	echo '                       |            ||        '
	echo '                       |\           ||        '
	echo '                       | \          ||        '
	echo '                       |  \         ||        '
	echo '                       |            ||        '
	echo '                                    ||        '
	echo '                                    ||        '
	echo '                                    ||        '
	echo '                                  _===_       '
	echo '                             ____-     -____  '
}
function noArms
{
	echo '                      ==============||        '
	echo '                       |            ||        '
	echo '                       |            ||        '
	echo '                      ,-,           ||        '
	echo '                     (   )          ||        '
	echo '                      `-`           ||        '
	echo '                       |            ||        '
	echo '                       |            ||        '
	echo '                       |            ||        '
	echo '                       |            ||        '
	echo '                       |            ||        '
	echo '                                    ||        '
	echo '                                    ||        '
	echo '                                    ||        '
	echo '                                  _===_       '
	echo '                             ____-     -____  '
}
function noBody
{
	echo '                      ==============||        '
	echo '                       |            ||        '
	echo '                       |            ||        '
	echo '                      ,-,           ||        '
	echo '                     (   )          ||        '
	echo '                      `-`           ||        '
	echo '                                    ||        '
	echo '                                    ||        '
	echo '                                    ||        '
	echo '                                    ||        '
	echo '                                    ||        '
	echo '                                    ||        '
	echo '                                    ||        '
	echo '                                    ||        '
	echo '                                  _===_       '
	echo '                             ____-     -____  '
}
function youLose
{
	echo '                      ==============||        '
	echo '                       |            ||        '
	echo '                       |            ||        '
	echo '  __    __  _____   _   _           ||        '
	echo '  \ \  / / |  _  | | | | |          ||        '
	echo '   \ \/ /  | | | | | | | |          ||        '
	echo '    \  /   | | | | | | | |          ||        '
	echo '    |  |   | |_| | | |_| |          ||        '
	echo '    |__|   |_____| |_____|          ||        '
	echo '   _       _____   _____   _____    ||        '
	echo '  | |     |  _  | |  __ | |  ___|   ||        '
	echo '  | |     | | | |  \ \ \| | |__     ||        '
	echo '  | |     | | | |   \ \_  |  __|    ||        '
	echo '  | |___  | |_| | |\_\  | | |___    ||        '
	echo '  |_____| |_____| |_____| |_____| _===_       '
	echo '                             ____-     -____  '
}
function youLose
{
	echo '                      ==============||        '
	echo '                       |            ||        '
	echo '                       |            ||        '
	echo '  __    __  _____   _   _           ||        '
	echo '  \ \  / / |  _  | | | | |          ||        '
	echo '   \ \/ /  | | | | | | | |          ||        '
	echo '    \  /   | | | | | | | |          ||        '
	echo '    |  |   | |_| | | |_| |          ||        '
	echo '    |__|   |_____| |_____|          ||        '
	echo ' ___        ___  _______  __   _    ||        '
	echo ' \  \  /\  /  / |__   __||  \ | |   ||        '
	echo '  \  \/  \/  /     | |   |   \| |   ||        '
	echo '   \   /\   /    __| |__ | |\   |   ||        '
	echo '    \_/  \_/    |_______||_| \__|   ||        '
	echo '                                  _===_       '
	echo '                             ____-     -____  '
}

declare -a stages=(all noRightLeg noLegs noRigthArm noArms noBody youLose youWin)
word="least is the most"
declare -a correct=('l' 'e' 'a' 's' 't' ' ' 'i' 's' ' ' 't' 'h' 'e' ' ' 'm' 'o' 's' 't')
declare -a guess=('_' '_' '_' '_' '_' ' ' '_' '_' ' ' '_' '_' '_' ' ' '_' '_' '_' '_')

#a[0]=2
#e[0]=1
#e[1]=11
#h[0]=10
#i[0]=6
#l[0]=0
#m[0]=13
#o[0]=14
#s[0]=3
#s[1]=7
#s[2]=15
#t[0]=4
#t[1]=9
#t[2]=16

declare -A positions
positions=( ["a"]=$a ["e"]=$e ["h"]=$h ["i"]=$i ["l"]=$l ["m"]=$m ["o"]=$o ["s"]=$s ["t"]=$t)

flag=1
stageCounter=0
while [ $flag -eq 1 ]; do
	${stages[$stageCounter]}
	for char in "$guess"; do
		echo -n $char
	done

	echo -n "Please enter the letter you guess: "
	read currGuess
	
	counter=0
	for char in "$correct"; do
		if [ "$currGuess" = "$char"  ]; then
			guess[$counter]=$char
		fi
		counter=$(($counter+1))
	done	# for char loop
done	# while loop
