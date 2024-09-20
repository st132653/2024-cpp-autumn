#include <iostream>
#include <stdio.h>

int main(int argc, char* argv[]) {
	int v = 0; //«адачка с мотоциклом
	int t = 0;
	scanf_s("%d", &v);
	scanf_s("%d", &t);
	int s = v * t - 108;
	printf("%d", ((s % 2) + (s + 1) % 2) * s); //дл€ отрицательных чисел умножаетс€ на -1, дл€ положительных на 1
	return EXIT_SUCCESS;
}