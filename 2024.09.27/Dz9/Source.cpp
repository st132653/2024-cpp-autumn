#include <iostream>

int main(int argc, char* argv[]) {
	int k = 0;
	int w = 0;
	int a1 = 0;
	int b1 = 0;
	int a2 = 0;
	int b2 = 0;
	int a3 = 0;
	int b3 = 0;
	scanf_s("%d", &k);
	scanf_s("%d", &w);
	scanf_s("%d", &a1);
	scanf_s("%d", &b1);
	scanf_s("%d", &a2);
	scanf_s("%d", &b2);
	scanf_s("%d", &a3);
	scanf_s("%d", &b3);
    if (b1 + b2 >= k && a1 + a2 <= w)
    {
        printf("YES");
    }
    else if (b2 + b3 >= k && a2 + a3 <= w)
    {
        printf("YES");
    }
    else if (b1 + b3 >= k && a1 + a3 <= w)
    {
        printf("YES");
    }
    else if (b1 + b2 + b3 >= k && a1 + a2 + a3 <= w)
    {
        printf("YES");
    }
    else if ((b1 >= k && a1 <= w) || (b2 >= k && a2 <= w) || (b3 >= k && a3 <= w))
    {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return EXIT_SUCCESS;
}