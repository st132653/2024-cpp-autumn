#include <iostream>
#include <stdio.h>

int main(int argc, char* argv[]) {
	int v = 0; //������� � ����������
	int t = 0;
	scanf_s("%d", &v);
	scanf_s("%d", &t);
	int s = v * t - 108;
	printf("%d", ((s % 2) + (s + 1) % 2) * s); //��� ������������� ����� ���������� �� -1, ��� ������������� �� 1
	return EXIT_SUCCESS;
}