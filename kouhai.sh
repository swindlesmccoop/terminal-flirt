#!/bin/sh

echo_colors () {
	echo "\033[31m" #red
	echo "\033[32m" #green
	echo "\033[33m" #yellow
	echo "\033[36m" #blue
}

RANDCOLNUM=$(shuf -i 1-4 -n 1)
COLOR=$(echo_colors | head -n $RANDCOLNUM | tail -n 1)
RANDSTRNUM="$(shuf -i 1-4 -n 1)"

print_strings () {
	printf ""$COLOR"I'll do it, senpai.\n"
	printf ""$COLOR"This will be a breeze.\n"
	printf ""$COLOR"Senpai, I'll take care of it for you.\n"
}

print_strings | head -n $RANDSTRNUM | tail -n 1
printf "[0m"
