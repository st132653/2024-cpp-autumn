#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {
	int n = 0;
	int h = 0;
	int t = 0;
	int i = 0;
	scanf_s("%d", &n);
	for (i = 0; i < n; ++i){
		int x = 0;
		scanf_s("%d", &x);
		if (x == 0) {
			++h;
		}
		else {
			++t;
		}
	}
	int z = fmin(h, t);
	printf("%d", z);
	return EXIT_SUCCESS;
}