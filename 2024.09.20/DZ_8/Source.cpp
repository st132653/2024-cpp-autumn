#include <iostream>
#include <stdio.h>

int main(int argc, char* argv[]) {
	int a = 0; //Задачка со сложением чисел
	int b = 100;
	int c = 10; //тут делители
	scanf_s("%d", &a);
	int h = a / b; //тут получаем сотню, деля число на сто
	int d = (a - b * h) / c; //тут получаем десяток, вычитая из числа сотки и деля на десять
	int o = (a - b * h - c * d); //такая же схема, но для единиц
	int q = h + d + o;
	printf("%d", q); //путей проще не придумал
	return EXIT_SUCCESS;
}