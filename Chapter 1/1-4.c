#include <stdio.h>

int main() {
	int celsius, fahr;
	int lower = 0, upper = 150, step = 10;

	printf(" C    F\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius/(5.0/9.0) + 32;
		printf("%3d %4d\n", celsius, fahr);
		celsius += step;
	}

	return 0;
}
