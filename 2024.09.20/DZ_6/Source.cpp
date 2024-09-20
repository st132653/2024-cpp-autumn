#include <iostream>
#include <stdio.h>

int main(int argc, char* argv[]) {
	int a = 0; //Задачка со стрельбой по банкам
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int c = a + b - 1;
	printf("%d, %d", c - a, c - b);
	return EXIT_SUCCESS;
}