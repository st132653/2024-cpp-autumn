#include <iostream>
#include <stdio.h>

int main(int argc, char* argv[]) {
	int h = 0;
	int a = 0;
	int b = 0;
	scanf_s("%d", &h);
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int p = a - b;
	int t = (h / p) - b;
	printf("%d", t); //для части комбинаций работает, осталось только методику получше придумать ;-)
	return EXIT_SUCCESS; //просили скинуть дз до субботы. dictum factum
}
