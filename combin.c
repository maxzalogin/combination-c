#include <stdio.h>

int combination(int n, int k);
int factorial(int n);

int main() {
    int n, k;
    if (scanf("%d%d", &n, &k) != 2 || n <= 0 || k < 0 || n < k) {
        printf("n/a");
    } else if (n > 12 || k > 12) {
        printf("Attention: n <= 12 or k > n");
    } else {
        printf("%d", combination(n, k));
    }

    return 0;
}

int combination(int n, int k) {
    int i = factorial(n) / (factorial(k) * factorial(n - k));
    return i;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else
        return n * factorial(n - 1);
}