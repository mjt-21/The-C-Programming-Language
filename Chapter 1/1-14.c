#include <stdio.h>

#define LETTER_COUNT 26

main() {
	int c, i, j;
	int charCounts[LETTER_COUNT];

	for (i = 0; i < LETTER_COUNT; ++i) {
		charCounts[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z') {
			++charCounts[c - 'a'];
		}
		else if (c >= 'A' && c <= 'Z') {
			++charCounts[c - 'A'];
		}
	}

	for (i = 0; i < LETTER_COUNT; ++i) {
		if (charCounts[i] > 0)
			printf("%c ", 'A' + i);
		for (j = 0; j < charCounts[i]; ++j) {
			printf("#");
		}
		if (charCounts[i] > 0)
			printf("\n");
	}
}
