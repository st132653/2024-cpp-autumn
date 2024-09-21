#include <iostream>

int main(int argc, char* argv[]) {
	int h = 0;
	int a = 0;
	int b = 0;
	scanf_s("%d", &h);
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int q = a - b;
	int t = (h - a + q - 1) / q + 1;
	printf("%d", t);
	return EXIT_SUCCESS;
}
