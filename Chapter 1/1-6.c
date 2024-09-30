#include <stdio.h>

main() {
	/* Any character other than EOF prints 1 */
	/* EOF prints 0 (NOTE: Ctrl+D on Unix-like, Ctrl+Z on Windows) */
	printf("%d\n", getchar() != EOF);
}
