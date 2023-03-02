#include <stdio.h>

int combination(int n, int k);

int main() {
    int n, k;
    if (scanf("%d%d", &n, &k) != 2 || n <= 0 || k < 0 || n < k) {
        printf("n/a");
    } else {
        printf("%d", combination(n, k));
    }

    return 0;
}

int combination(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return combination(n - 1, k - 1) + combination(n - 1, k);
    }
}