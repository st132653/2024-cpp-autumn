#include <iostream>

int main(int argc, char* argv[]) {
	int x = 0;
	int y = 0;
	int z = 0;
	int m = 0;
	int n = 0;
	int k = 0;
	scanf_s("%d %d %d", &x, &y, &z);
	scanf_s("%d %d %d", &m, &n, &k);
    if (((x == m) && (y == n) && (z == k))
        || ((x == m) && (y == k) && (z == n))
        || ((x == n) && (y == k) && (z == m))
        || ((x == n) && (y == m) && (z == k))
        || ((x == k) && (y == m) && (z == n))
        || ((x == k) && (y == n) && (z == m))) {
        cout << "Boxes are equal";
    }
    else if (((x >= m) && (y >= n) && (z >= k))
        || ((x >= m) && (y >= k) && (z >= n))
        || ((x >= n) && (y >= k) && (z >= m))
        || ((x >= n) && (y >= m) && (z >= k))
        || ((x >= k) && (y >= m) && (z >= n))
        || ((x >= k) && (y >= n) && (z >= m))) {
        printf("The first box is larger than the second one");
    }
    else if (((x <= m) && (y <= n) && (z <= k))
        || ((x <= m) && (y <= k) && (z <= n))
        || ((x <= n) && (y <= k) && (z <= m))
        || ((x <= n) && (y <= m) && (z <= k))
        || ((x <= k) && (y <= m) && (z <= n))
        || ((x <= k) && (y <= n) && (z <= m))) {
        printf("The first box is smaller than the second one");
    }
    else {
        printf("Boxes are incomparable");
    }
	return EXIT_SUCCESS;
}