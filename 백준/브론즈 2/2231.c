#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        m = i;
        int sum = 0;
        while (m > 0) {
            sum += m % 10;
            m /= 10;
        }
        if (sum + i == n) {
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
}