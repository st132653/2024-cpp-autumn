#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int m = -1;
	int mi = -1;
	for (int i = 0; i < n; ++i) {
		int v = 0;
		int s = 0;
		scanf_s("%d %d", &v, &s);
		if (s == 1) {
			if (v > m) {
				m = v;
				mi = i+1;
			}
		}
	}
	printf("%d", mi);
	return EXIT_SUCCESS;
}