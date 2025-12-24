#include <stdio.h>

int main(void) {
	int n;
	unsigned long long fact = 1;

	printf("Enter a non-negative integer: ");
	if (scanf("%d", &n) != 1 || n < 0) {
		printf("Invalid input.\n");
		return 1;
	}

	for (int i = 1; i <= n; i++) {
		fact *= i;
	}

	printf("Factorial of %d = %llu\n", n, fact);
	return 0;
}
