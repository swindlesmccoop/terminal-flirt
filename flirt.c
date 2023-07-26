#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "config.h"

int main() {
	const int len = 0
#ifdef TSUNDERE
		+ 3
#endif
#ifdef IMOUTO
		+ 3
#endif
#ifdef MAID
		+ 3
#endif
#ifdef ONEE
		+ 3
#endif
#ifdef KOUHAI
		+ 3
#endif
	;

	const char* colors[] = { RED, GREEN, YELLOW, BLUE };

	const char* strings[] = {
#ifdef TSUNDERE
		"It's not like I wanted to do it for you or anything.",
		"I'm not doing this for you again.",
		"Ugh, what a bother."
#endif
#ifdef IMOUTO
		"I'll take care of it, onii-chan!",
		"Onii-chan, don't worry about it.",
		"Leave it to me, onii-chan!"
#endif
#ifdef MAID
		"As you wish.",
		"I'll do it for you.",
		"Yes, master."
#endif
#ifdef ONEE
		"My, my, I'll do it for you.",
		"I think I can handle it this time.",
		"I'll make sure this executes properly."
#endif
#ifdef KOUHAI
		"I'll do it, senpai.",
		"This will be a breeze.",
		"Senpai, I'll take care of it for you."
#endif
	};

	if (len == 0) {
		fprintf(stderr, "Error: Invalid STRINGS macro. Please edit config.h\n");
		return 1;
	}

	//seed the random number generator
	srand(time(NULL) ^ (getpid() << 16));

	//select a random color and a random string
	const char* COLOR;
	#ifdef COLORIZE
		COLOR = colors[rand() % 4];
	#else
		COLOR= NORMAL;
	#endif

	const char* str = strings[rand() % len];
	//print the string in the random color
	printf("%s%s%s\n", COLOR, str, NORMAL);

	return 0;
}

