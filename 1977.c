#include <stdio.h>
#include <math.h>
int main() {
    int m, n, sum = 0, min = 10001;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++) {
        if (sqrt(i) - (int) sqrt(i) == 0) {
            sum += i;
            if (min > i) min = i;
        }
    }
    if (sum > 0) {
        printf("%d\n%d", sum, min);
    } else printf("-1");
}