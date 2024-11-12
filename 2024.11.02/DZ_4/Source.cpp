#include <iostream>
#define N 100001
int main(int argc, char* argv[]) {
	int n = 0;
	int sum = 0;
	scanf_s("%d", &n);
	int* a = (int*)malloc(N * sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", (a + i));
	}
	int min = *(a + 0);
	int max = *(a + 0);
	int nmi = 0;
	int nma = 0;
	int q = 1;
	for (int i = 0; i < n; ++i) {
		if (*(a + i) > 0) {
			sum += *(a + i);
		}
	}
	for (int i = 0; i < n; ++i) {
		if (max < *(a + i)) {
			max = *(a + i);
			nma = i;
		}
	}
	for (int i = 0; i < n; ++i) {
		if (min > *(a + i)) {
			min = *(a + i);
			nmi = i;
		}
	}
	if (nma > nmi) {
		for (int i = nmi + 1; i < nma; ++i) {
			q = q * *(a + i);
		}
	}
	else {
		for (int i = nma + 1; i < nmi; ++i) {
			q = q * *(a + i);
		}
	}
	printf("%d %d", sum, q);
	free(a);
	return EXIT_SUCCESS;
}