#include <stdio.h>

main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == 9) /* In ASCII 9 is tab */
			printf("\\t");
		else if (c == 8) /* In ASCII 8 is backspace */
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else
			printf("%c", c);
	}
	printf("\n");
}
