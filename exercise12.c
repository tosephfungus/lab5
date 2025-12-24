#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;

	printf("Enter an integer: ");
	if (scanf("%d", &n) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	if (n == 0) {
		printf("All integers divide 0, so it has infinitely many factors.\n");
		return 0;
	}

	int num = abs(n);
	printf("Factors of %d:\n", n);
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
