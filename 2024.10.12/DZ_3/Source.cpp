#include <cstdio>
#define N 1001

int main(int argc, char* argv[]) {
	int n = 0;
	int k = 0;
	int max = 0;
	int min = 1000;
	scanf_s("%d", &n);
	int g[N] = {};
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &g[i]);
	}
	for (int i = 0; i < n; ++i) {
		if (max < g[i]) {
			max = g[i];
		}
		if (min > g[i]) {
			min = g[i];
		}
	}
	for (int i = 0; i<n; ++i){
		if (g[i] == max) {
			g[i] = min;
		}
	}
	for (int i = 0; i < n; ++i) {
		printf("%d ", g[i]);
	}
return 0;
}