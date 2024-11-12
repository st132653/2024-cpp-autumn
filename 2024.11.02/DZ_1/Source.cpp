#include <iostream>

int main(int argc, char* argv[]) {
	int N = 100001;
	int n = 0;
	scanf_s("%d", &n);
	int* a = (int*)malloc(N * sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", (a + i));
	}
	int m = *(a + 0);
	int q = 0;
	for (int i = 0; i < n; ++i) {
		if (m>*(a+i)){
			m = *(a + i);
			q = i;
		}
	}
	if (q <= n / 2) {
		q = q * -1;
		int z = n + q;
		for (int i = n - z; i < n; ++i) {
			printf("%d ", *(a + i));
		}
		for (int i = 0; i < n - z; ++i) {
			printf("%d ", *(a + i));
		}
	}
	else {
		int s = n - q;
		for (int i = n - s; i < n; ++i) {
			printf("%d ", *(a + i));
		}
		for (int i = 0; i < n - s; ++i) {
			printf("%d ", *(a + i));
		}
	}
	free(a);
	return EXIT_SUCCESS;
}