#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int i = 0;
	int j = 0;
	int dora = 0;
	int dorb = 0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; ++i)
	for (j = 1; j <= n; ++j)
	{
		scanf_s("%d", &dora);
		dorb += dora;
	}
	printf("%d", dorb / 2);
	return EXIT_SUCCESS;
}