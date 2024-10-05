#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int max = 0;
	int t = 0;
	for (int i = 0; i < n; ++i) {
		int ct = 0;
		scanf_s("%d", &ct);
		if (ct > 0) {
			++t;
		}
		else {
			if (t > max) {
				max = t;
			}
		t = 0;
		}
	}
	if (t > max) {
		max = t;
	}
	printf("%d", max);
	return EXIT_SUCCESS;
}