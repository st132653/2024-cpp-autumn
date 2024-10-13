#include <iostream>
#define N 1001

int main(int argc, char* arv[]) {
	int n = 0;
	int x = 0;
	int c = 0;
	int s = 0;
	int s1 = 0;
	scanf_s("%d", &n);
	int g[N] = {};
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &g[i]);
		g[n] = { g[1] };
		g[n + 1] = { g[0] };
	}
	for (int k = 0; k < n + 2; ++k) {
		for (int i = k; i < k+3; ++i) {
			if (c < 3) {
				s += g[i];
				++c;
			}
		}
		if (s1 < s) {
			s1 = s;
		}
		c = 0;
	}
	printf("%d ", s);
	return EXIT_SUCCESS;
}