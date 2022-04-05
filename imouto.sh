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
	printf ""$COLOR"I'll take care of it, onii-chan!\n"
	printf ""$COLOR"Onii-chan, don't worry about it.\n"
	printf ""$COLOR"Leave it to me, onii-chan!.\n"
}

print_strings | head -n $RANDSTRNUM | tail -n 1
