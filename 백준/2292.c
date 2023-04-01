#include <stdio.h>

int main() {
    int n, x = 1, count = 0;
    scanf("%d", &n);
    for (int i = 1; x < n; i++) {
        x += i * 6;
        count++;
    }
    printf("%d", count + 1);
}