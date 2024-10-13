#include <iostream>
#include <cmath>
#define N 1001

int main(int argc, char* arv[]) {
	int n = 0;
	int x = 0;
	scanf_s("%d", &n);
	int g[N] = {};
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &g[i]);
	}
	scanf_s("%d", &x);
	int k = g[1];
	for (int i = 0; i < n; ++i) {
		if (abs(g[i] - x) == abs(k - x) && g[i] < k || abs(g[i] - x) < abs(k - x)) {
			k = g[i];
		}
	}
	printf("%d", k);
	return EXIT_SUCCESS;
}