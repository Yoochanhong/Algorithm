#include <stdio.h>

int main() {
    int n, a, b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        if ((a <= 2 && b <= 1) || (a <= 1 && b <= 2)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}