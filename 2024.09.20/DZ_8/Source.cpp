#include <iostream>

int main(int argc, char* argv[]) {
	int a = 0; 
	int b = 100;
	int c = 10; 
	scanf_s("%d", &a);
	int h = a / b; 
	int d = (a - b * h) / c; 
	int o = (a - b * h - c * d); 
	int q = h + d + o;
	printf("%d", q); 
	return EXIT_SUCCESS;
}