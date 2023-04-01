#include<stdio.h>

int main() {
    int a, b, n = 1, k = 1;
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= b; i++) k *= i;
    while (b > 0) {
        n *= a;
        a--;
        b--;
    }
    printf("%d", n / k);
    return 0;
}