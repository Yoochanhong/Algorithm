#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i = 2;
    while (n >= i) {
        if (n % i == 0) {
            n /= i;
            printf("%d\n", i);
        }
        if (n % i != 0) i++;
    }
}