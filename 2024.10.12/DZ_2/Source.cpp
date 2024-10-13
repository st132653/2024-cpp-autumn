#include <cstdio>

int main(int argc, char* arv[]) {
	int n = 0;
	int l = 0;
	int r = 0;
	int q = 0;
	scanf_s("%d", &n);
	int g[1001] = {};
	for (int i = 1; i <= n; ++i) {
		scanf_s("%d", &g[i]);
	}
	scanf_s("%d", &l);
	scanf_s("%d", &r);
	q = l;
	for (int i = l+1; i <= r; ++i) {
		if (g[i] > g[q])
		{
			q = i;
		}
	}
	printf("%d %d", g[q], q);
	return 0;
}
