#include <stdio.h>

int main(void) {
	int n;

	printf("Enter a number: ");
	if (scanf("%d", &n) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	printf("Multiplication table of %d:\n", n);
	for (int i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", n, i, n * i);
	}

	return 0;
}
