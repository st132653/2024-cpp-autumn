#include <iostream>
#define N 100001
int main(int argc, char* arv[]) {
	int n = 0;
	int m0 = 0;
	int* a = (int*)malloc(N * sizeof(int));
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}
	scanf_s("%d", &m0);
	int m = m0 % n;
	int z = n + m;
	if (m > 0) {
		for (int g = n - m; g < n; ++g) {
			printf("%d ", *(a + g));
		}
		for (int g = 0; g < n - m; ++g) {
			printf("%d ", *(a + g));
		}
	}
	else {
		for (int g = n - z; g < n; ++g) {
			printf("%d ", *(a + g));
		}
		for (int g = 0; g < n - z; ++g) {
			printf("%d ", *(a + g));
		}
	}
	free(a);
	return EXIT_SUCCESS;
}