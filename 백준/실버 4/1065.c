#include <stdio.h>

int hansu(int n) {
    int a, b, c, count = 99;
    if (n < 100) return n;
    for (int i = 110; i <= n; i++) {
        c = i % 10;
        b = i / 10 % 10;
        a = i / 100;
        if (c - b == b - a) count++;
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", hansu(n));
}

//1065 한수