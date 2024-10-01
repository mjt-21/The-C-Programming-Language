#include <stdio.h>

int main() {
	int c, prevC;

	prevC = getchar();
	putchar(prevC);
	while ((c = getchar()) != EOF) {
		if (c == ' ' && prevC == ' ')
			continue; /* skip outputting blank if they are consecutive blanks */
		putchar(c);
		prevC = c;
	}
}
