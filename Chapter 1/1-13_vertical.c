#include <stdio.h>

#define BUFFER 100

main() {
	int c, i, j, wordLen, wordCount, maxLen;
	int histogram[BUFFER];

	for (i = 0; i < BUFFER; ++i) {
		histogram[i] = 0;
	}

	wordLen = wordCount = maxLen = i = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			++wordCount;
			++i;
		}
		else {
			++histogram[i];
			if (histogram[i] > maxLen) {
				maxLen = histogram[i];
			}
		}
	}

	for (i = maxLen; i > 0; --i) {
		for (j = 0; j < wordCount; ++j) {
			if (histogram[j] >= i) {
				printf("#");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

