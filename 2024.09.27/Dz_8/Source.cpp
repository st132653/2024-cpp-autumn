#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int m = 0;
	scanf_s("%d %d", &n, &m);
	int t = (2 * m * n) + (m + n) + 2 * (n / 2) + 2 * (m / 2) + (n % 2 + m % 2) % 2;
	printf("%d", t);
	return EXIT_SUCCESS;
}