#include <stdio.h>

int main() {
    while (1) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) break;
        if (a - b < 2) printf("0 0\n");
        else if ((a - b) % 2 != 0) printf("%d 1\n", (a - b - 3) / 2);
        else printf("%d 0\n", (a - b) / 2);
    }
    return 0;
}