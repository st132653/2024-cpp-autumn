#include <iostream>

int main(int argc, char* argv[]) {
	int k = 0;
	int n = 0;
	int m = 0;
	int d = 0;
	scanf_s("%d", &k);
	for (int i = 0; i < k; ++i) {
		scanf_s("%d %d", &n, &m);
		long long d = 19 * m + (n + 239) * (n + 366) / 2;
		printf("%d\n", d);
	}
	return EXIT_SUCCESS;
}
