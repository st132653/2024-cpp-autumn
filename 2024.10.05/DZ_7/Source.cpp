#include <iostream>

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int b0 = b;
	int a0 = a;
	if (a == 0 || b%a==0) {
		printf("%d", 1);
	}
	else {
		while (b != 0) {
			int c = b;
			b = a % b;
			a = c;
			if (b == 0) {
				int lcm = a0 / a;
				printf("%d", lcm);
				return 0;
			}
		}
	}
	return EXIT_SUCCESS;
}