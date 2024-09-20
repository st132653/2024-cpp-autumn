#include <iostream>
#include <stdio.h>

int main(int argc, char* argv[]) {
	int a = 0; //8th one
	int b = 100;
	int c = 10; //here's the dividers
	scanf_s("%d", &a);
	int h = a / b; //we get a 100 by dividing this number by 100
	int d = (a - b * h) / c; //complicated scheme to get the dozen (or ten or sth)
	int o = (a - b * h - c * d); //getting 1
	int q = h + d + o;
	printf("%d", q); //not the simpliest way
	return EXIT_SUCCESS;
}