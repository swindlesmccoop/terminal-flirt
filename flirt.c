#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "config.h"

int main() {
	const char* colors[] = { RED, GREEN, YELLOW, BLUE };
	const char* tsundere_strings[] = { "It's not like I wanted to do it for you or anything.", "I'm not doing this for you again.", "Ugh, what a bother." };
	const char* imouto_strings[] = { "I'll take care of it, onii-chan!", "Onii-chan, don't worry about it.", "Leave it to me, onii-chan!" };
	const char* maid_strings[] = { "As you wish.", "I'll do it for you.", "Yes, master." };
	const char* onee_strings[] = { "My, my, I'll do it for you.", "I think I can handle it this time.", "I'll make sure this executes properly." };
	const char* kouhai_strings[] = { "I'll do it, senpai.", "This will be a breeze.", "Senpai, I'll take care of it for you." };

	//select the array of strings based on the STRINGS macro
	const char** strings;
	if (STRINGS == "tsundere") { strings = tsundere_strings; }
	else if (STRINGS == "imouto") { strings = imouto_strings; }
	else if (STRINGS == "maid") { strings = maid_strings; }
	else if (STRINGS == "onee") { strings = onee_strings; }
	else if (STRINGS == "kouhai") { strings = kouhai_strings; } else {
		fprintf(stderr, "Error: Invalid STRINGS macro. Please edit config.h\n");
		return 1;
	}

	//seed the random number generator
	srand(time(NULL) ^ (getpid() << 16));

	//select a random color and a random string
	const char* COLOR = colors[rand() % 4];
	const char* str = strings[rand() % 3];

	//print the string in the random color
	printf("%s%s\n", COLOR, str);

	return 0;
}
