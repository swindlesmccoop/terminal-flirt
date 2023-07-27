#include <stdio.h>
#include <stdlib.h>
#include "config.h"

int main() {
	const char* colors[] = { RED, GREEN, YELLOW, BLUE };

	const char* strings[] = {
#include "strings/tsundere.h"
#include "strings/imouto.h"
#include "strings/maid.h"
#include "strings/onee.h"
#include "strings/kouhai.h"
	};

	const int len = 0
	+ LEN_TSUNDERE
	+ LEN_IMOUTO
	+ LEN_MAID
	+ LEN_ONEE
	+ LEN_KOUHAI
	;

	if (len == 0) {
		fprintf(stderr, "Error: No archetypes selected. Please edit config.h\n");
		return 1;
	}

	//seed the random number generator
	//using /dev/random and fopen for a lower footprint than time/getpid
	//because we don't need unistd.h or time.h
	FILE* f = fopen("/dev/random", "rb");
	int seed;
	fread(&seed, sizeof(int), 1, f);
	srand(seed);

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

