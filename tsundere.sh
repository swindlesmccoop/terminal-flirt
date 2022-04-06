#!/bin/sh

bold=$(tput bold)
normal=$(tput sgr0)

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
	printf ""$COLOR"It's not like I wanted to do it for you or anything.\n"
	printf ""$COLOR"I'm not doing this for you again.\n"
	printf ""$COLOR"Ugh, what a bother.\n"
	printf ""$COLOR"Well, I guess if it's ${bold}you${normal}...\n"
}

print_strings | head -n $RANDSTRNUM | tail -n 1
printf "[0m"
