#include <stdio.h>

int main() {
    int a, b, i = 0;
    scanf("%d %d", &a, &b);
    printf("%d.", a / b);
    while (a % b != 0 && i < 2000) {
        a %= b;
        a *= 10;
        printf("%d", a / b);
        i++;
    }
    return 0;
}