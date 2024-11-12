#include <iostream>

int main(int argc, char* argv[]) {
	int N = 100001;
	int n = 0;
	int m = 0;
	int x = 0;
	int y = 0;
	int* a = (int*)malloc(N * sizeof(int));
	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &x);
		*(a + x) = 1;
	}
	for (int i = 0; i < m; ++i) {
		scanf_s("%d", &y);
		if (*(a + y) == 1) {
			*(a + y) = 2;
		}
	}
	for (int i = 0; i < N; ++i) {
		if (*(a + i) == 2) {
			printf("%d ", i);
		}
	}
	free(a);
	return EXIT_SUCCESS;
}