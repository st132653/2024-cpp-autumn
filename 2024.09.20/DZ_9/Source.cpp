#include <iostream>

int main(int argc, char* argv[]) {
	int s = 0; 
	scanf_s("%d", &s);
	int a = s / 6;
	int c = 4 * a;
	printf("%d %d %d", a, c, a);
	return EXIT_SUCCESS;
}