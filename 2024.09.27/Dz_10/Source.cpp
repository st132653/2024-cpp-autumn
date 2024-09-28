#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int a = 2 * (n % 5) % 5; 
    int b = (n/5) - a / 2;
	printf("%d %d", b, a);
	return EXIT_SUCCESS;
}