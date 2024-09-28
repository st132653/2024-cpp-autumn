#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {
    float a = 0;
    int b = 0;
    float c = 0;
    double x1 = 0;
    double x2 = 0;
    scanf_s("%f", &a);
    scanf_s("%d", &b);
    scanf_s("%f", &c);
    double z = b;
    float g = a * 2;
    double d = pow(b, 2) - 4 * a * c;
    if (a == 0 && b != c) {
        double x1 = -c / b;
        printf("%d\n", 1);
        printf("%f", x1);
    }
    else if (a == 0 && b == c) {
        printf("%d", -1);
    }
    else if (d == 0) {
        printf("%d\n", 1);
        double x1 = ((-z) / g);
        printf("%f", x1);
    }
    else if (d < 0) {
        return 0;
    }
    else if (d > 0) {
        printf("%d\n", 2);
        double x1 = (((-z) - sqrt(d)) / g);
        double x2 = (((-z) + sqrt(d)) / g);
        printf("%f\n%f", x1, x2);
    }
    return EXIT_SUCCESS;
}