#include <stdio.h>

int main() {
    int n, m, sum = 0, stack[100000], count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        if (m == 0) {
            count--;
        } else stack[count++] = m;
    }
    for (int i = 0; i < count; i++) {
        sum += stack[i];
    }
    printf("%d", sum);
    return 0;
}