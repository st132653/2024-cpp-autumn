#include <iostream>
#define N 101

int main(int argc, char* argv[]) {
	int n = 0;
	int g[N] = {};
	int x = 0;
	int a = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &g[i]);
	}
	scanf_s("%d", &x);
	for (int i = 0; i < n; ++i) {
		if (g[i] > x) {
			++a;
		}
		if (g[i] == x) {
			++a;
		}
	}
	printf("%d", a+1);
	return 0;
}