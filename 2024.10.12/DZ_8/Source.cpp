#include <cstdio>
#define N 1001

int main(int argc, char* argv[]) {
	int n = 0;
	int g[N] = {};
	int a[N] = {};
	int m = 0;
	scanf_s("%d", &n); 
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &g[i]); 
	}
	scanf_s("%d", &m); 
	m *= 2;
	for (int i = 0; i < m; ++i) {
		scanf_s("%d", &a[i]); 
	}
	for (int i = 0; i < m; i+=2) {
		for (int j = 0; j < n; ++j) {
			if (g[j] == a[i]) {
				for (int k = j; k<a[i+1]; ++k) {
						printf("%d ", g[k]);
					}
				}
			}
		}
		printf("\n");
	}
	return 0;
}