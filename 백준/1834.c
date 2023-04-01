#include <stdio.h>

int main() {
    long long int n, sum = 0;
    scanf("%lld", &n);
    for (int i = 1; i <= n - 1; i++) sum += (n + 1) * i;
    printf("%lld", sum);
}
