#include <iostream>
#define N 101

int main(int argc, char* arv[]) {
	int n = 0;
	int c = 0;
	int u = 0;
	int a[N] = {0};
	scanf_s("%d", &c);
	int* even = (int*)malloc(n * sizeof(int));
	int* odd = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}
	for (int i = 0; i < n; ++i) {
		if ((*(a + i) % 2) == 0) {
			*(even + i) = *(a + i);
			*(odd + i) = 0;
			++c;
		}
		else {
			*(odd + i) = *(a + i);
			*(even + i) = 0;
			++u;
		}
	}
	for (int i = 0; i < n; ++i) {
		if (*(odd + i) != 0) {
			printf("%d ", *(odd + i));
		}
		else{}
	}
	printf("\n");
	for (int i = 0; i < n; ++i) {
		if (*(even + i) != 0) {
			printf("%d ", *(even + i));
		}
		else {}
	}
	printf("\n");
	if (c >= u) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	free(even);
	free(odd);
	return EXIT_SUCCESS;
}