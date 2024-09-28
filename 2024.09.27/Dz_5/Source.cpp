#include <iostream>

int main(int argc, char* argv[]) {
    int l1 = 0;
    int w1 = 0;
    int h1 = 0;
    int l2 = 0;
    int w2 = 0;
    int h2 = 0;
    int lc = 0;
    int wc = 0;
    int hc = 0;
    scanf_s("%d %d %d", &l1, &w1, &h1);
    scanf_s("%d %d %d", &l2, &w2, &h2);
    scanf_s("%d %d %d", &lc, &wc, &hc);
    int s1 = l1 * w1 * h1;
    int s2 = l2 * w2 * h2;
    int s3 = lc * wc * hc;
    if (s1 <= s2 && s2 <= s3) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return EXIT_SUCCESS;
}