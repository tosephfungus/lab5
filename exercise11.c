#include <stdio.h>

static int gcd(int a, int b) {
	while (b != 0) {
		int t = b;
		b = a % b;
		a = t;
	}
	return a < 0 ? -a : a; 
}

int main(void) {
	int a, b;

	printf("Enter two integers: ");
	if (scanf("%d %d", &a, &b) != 2) {
		printf("Invalid input.\n");
		return 1;
	}

	if (a == 0 && b == 0) {
		printf("GCD and LCM are undefined when both numbers are zero.\n");
		return 0;
	}

	int g = gcd(a, b);
	long long lcm = (long long)a / g * b; 
	if (lcm < 0) lcm = -lcm;

	printf("GCD: %d\n", g);
	printf("LCM: %lld\n", lcm);
	return 0;
}
