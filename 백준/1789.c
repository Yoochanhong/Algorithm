#include <stdio.h>

int main() {
    long long int n, i = 0, sum = 0;
    scanf("%lld", &n);
    while (sum <= n) {
        i++;
        sum += i;
    }
    printf("%lld", i - 1);
    return 0;
}