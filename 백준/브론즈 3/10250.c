#include <stdio.h>

int main() {
    int t, h, w, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &h, &w, &n);
        int asdf = n % h > 0 ? 1 : 0;
        printf("%d%.2d\n", n % h == 0 ? h : n % h, n / h + asdf);
    }
    return 0;
}