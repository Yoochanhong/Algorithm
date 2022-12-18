#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int j = 0; j < i * 2 - 1; j++) {
            if (j == 0 || j == i * 2 - 2 || i == n) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}