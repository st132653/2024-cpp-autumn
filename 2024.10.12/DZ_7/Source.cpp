#include <iostream>
#define N 1001

int main(int argc, char* arv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int g[N] = {};
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &g[i]);
	}
	for (int i = n-1; i >= 0; --i) {
		printf("%d ", g[i]);
	}
	return EXIT_SUCCESS;
}