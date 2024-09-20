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
	printf("%d", t); //works for several combinations only :-(, I'll try some other methods ;-)
	return EXIT_SUCCESS; //you asked us to send the homehomework until saturday, but I had some problems with git
}
