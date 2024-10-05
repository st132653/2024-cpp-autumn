#include <iostream>

int main(int argc, char* argv[]) {
	int H = 437;
	int n = 0;
	int h = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &h);
		if (h <= H) {
			printf("Crash %d", i+1);
			return 0;
		}
	}
	printf("No crash\n");
	return EXIT_SUCCESS;
}
