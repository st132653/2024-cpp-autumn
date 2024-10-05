#include <iostream>

int main(int argc, char* argv[]) {
	int fi(int n) {
		if (n <= 1) {
			return n;
		}
		return fi(n - 1) + fi(n - 2);
	}
	int n = 0;
	scanf_s("%d", &n);
	printf("%d", fi(n));
	return EXIT_SUCCESS;
}