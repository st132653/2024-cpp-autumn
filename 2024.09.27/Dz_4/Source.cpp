#include <iostream>

int main(int argc, char* argv[]) {
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;
    scanf_s("%d %d %d", &a1, &b1, &c1);
    scanf_s("%d %d %d", &a2, &b2, &c2);
    if (((a1 == a2) && (b1 == b2) && (c1 == c2))
        || ((a1 == a2) && (b1 == c2) && (c1 == b2))
        || ((a1 == b2) && (b1 == a2) && (c1 == c2))
        || ((a1 == b2) && (b1 == c2) && (c1 == a2))
        || ((a1 == c2) && (b1 == b2) && (c1 == a2))
        || ((a1 == c2) && (b1 == a2) && (c1 == b2))) {
        printf("Boxes are equal");
    }
    else if (((a1 >= a2) && (b1 >= b2) && (c1 >= c2))
        || ((a1 >= a2) && (b1 >= c2) && (c1 >= b2))
        || ((a1 >= b2) && (b1 >= a2) && (c1 >= c2))
        || ((a1 >= b2) && (b1 >= c2) && (c1 >= a2))
        || ((a1 >= c2) && (b1 >= b2) && (c1 >= a2))
        || ((a1 >= c2) && (b1 >= a2) && (c1 >= b2))) {
        printf("The first box is larger than the second one");
    }
    else if (((a1 <= a2) && (b1 <= b2) && (c1 <= c2))
        || ((a1 <= a2) && (b1 <= c2) && (c1 <= b2))
        || ((a1 <= b2) && (b1 <= a2) && (c1 <= c2))
        || ((a1 <= b2) && (b1 <= c2) && (c1 <= a2))
        || ((a1 <= c2) && (b1 <= b2) && (c1 <= a2))
        || ((a1 <= c2) && (b1 <= a2) && (c1 <= b2))) {
        printf("The first box is smaller than the second one");
    }
    else {
        printf("Boxes are incomparable");
    }
	return EXIT_SUCCESS;
}