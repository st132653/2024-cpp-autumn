#include <iostream>
#include <stdio.h>

int main(int argc, char* argv[]) {
	int a = 0; //1st one
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d", a + b);
	return EXIT_SUCCESS;
}