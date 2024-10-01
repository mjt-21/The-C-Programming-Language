#include <stdio.h>

main() {
	int c;
	long int blanks = 0, tabs = 0, newlines = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++blanks;
		else if (c == 9) /* tab's ASCII code is 9 */
			++tabs;
		else if (c == '\n')
			++newlines;
	}

	printf("Blanks: %ld\n", blanks);
	printf("Tabs: %ld\n", tabs);
	printf("Newlines: %ld\n", newlines);
}
