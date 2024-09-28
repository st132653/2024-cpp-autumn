#include <iostream>

int main(int argc, char* argv[]) {
	int k = 0;
	int m = 0;
	int n = 0;
	scanf_s("%d", &k);
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	if (n <= k) {
		int t = 2 * m;
		printf("%d", t);
	}
	else if (n * 2 % k == 0) {
		int t = m * (n * 2 / k);
		printf("%d", t);
	}
	else {
		int t = m * (1 + n * 2 / k);
		printf("%d", t);
	}
	return EXIT_SUCCESS;
}