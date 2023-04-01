#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &m);
        printf("Case %d:\n", i);
        for (int j = 1; j <= m; j++) {
            if (m - j >= j && m - j < 7) {
                printf("(%d,%d)\n", j, m - j);
            }
        }
    }
}
