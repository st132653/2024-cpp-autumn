#include <iostream>
#include <math.h>

int main(int argc, char* argv[]) {
	int x0 = 0;
	int y0 = 0;
	int x = 0;
	int y = 0;
	scanf_s("%d", &x0);
	scanf_s("%d", &y0);
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	if (x0 == x || y0 == y) {
		printf("YES");
	}
	else if (abs(x0 - x) == abs(y0 - y)) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return EXIT_SUCCESS;
}
