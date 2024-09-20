#include <iostream>
#include <stdio.h>

int main(int argc, char* argv[]) {
	int v = 0; //7th one
	int t = 0;
	scanf_s("%d", &v);
	scanf_s("%d", &t);
	int s = v * t - 108;
	printf("%d", ((s % 2) + (s + 1) % 2) * s); //для отрицательных чисел умножается на -1, для положительных на 1
	return EXIT_SUCCESS;
}