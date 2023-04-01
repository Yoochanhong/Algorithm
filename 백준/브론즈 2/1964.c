#include<stdio.h>

int main() {
    long long int n, sum = 5;
    scanf("%lld", &n);
    for (int i = 2; i <= n; i++) sum += i * 3 + 1;
    printf("%lld", sum % 45678);
}