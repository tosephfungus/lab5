#include <stdio.h>

int main(void) {
	int n;

	printf("Enter number of terms (>=1): ");
	if (scanf("%d", &n) != 1 || n < 1) {
		printf("Invalid input.\n");
		return 1;
	}

	unsigned long long a = 0, b = 1;

	printf("Fibonacci series up to %d terms:\n", n);
	for (int i = 1; i <= n; i++) {
		printf("%llu", b);
		if (i < n) printf(" ");
		unsigned long long next = a + b;
		a = b;
		b = next;
	}
	printf("\n");
	return 0;
}
