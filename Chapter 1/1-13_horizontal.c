#include <stdio.h>

main() {
	int c, i, wordLen;

	wordLen = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			for (i = 0; i < wordLen; ++i) {
				printf("#");
			}
			printf("\n");

			wordLen = 0;
		}
		else {
			++wordLen;
		}
	}
}
