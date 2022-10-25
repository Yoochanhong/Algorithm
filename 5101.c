#include <stdio.h>

int main() {
    while (1) {
        int a, b, c, res;
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) break;
        res = c - a + b;
        if (res % b || (b && a > c)) printf("X\n");
        else printf("%d\n", res / b);
    }
    return 0;
}