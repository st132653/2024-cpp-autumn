#include <iostream>
#include <stdio.h>

int main(int argc, char* argv[]) {
	int a = 0; //5th one
	scanf_s("%d", &a);
	printf("The next number for the number %d is %d.\nThe previous number for the number %d is %d\n", a, a + 1, a, a - 1);
	return EXIT_SUCCESS;
}