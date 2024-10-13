#include <cstdio>

int main(int argc, char* arv[]) {
	int n = 0;
	int x = 0;
	int k = 0;
	scanf_s("%d", &n);
	int g[1001] = {};
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &g[i]);
	}
	scanf_s("%d", &x);
	for (int i = 0; i < n; ++i) {
		if (g[i] == x) {
			++k;
		}
	}
	printf("%d", k);
	return 0;
}