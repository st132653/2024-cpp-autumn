#include <iostream>
#include <stdio.h>

int main(int argc, char* argv[]) {
	int a = 0; //������� � ��������
	int b = 0;
	int c = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	int d = a * b * c * 2;
	printf("%d", d);
	return EXIT_SUCCESS;
}
