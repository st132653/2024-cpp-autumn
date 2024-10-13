#include <iostream>
#define N 101

int main(int argc, char* arv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int g[N] = {};
	int a[N] = {};
	float max1 = 0;
	int maxim = 0;
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &g[i]);
	}
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n; ++i) {
		if (a[i] == 0) {
			continue;
		}
		else {
			float max = g[i]*a[i];
			if (max1 < max) {
				max1 = max;
				maxim = i;
			}
		}
	}
	printf("%d", maxim+1);
	return EXIT_SUCCESS;
}