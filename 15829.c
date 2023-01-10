#include <stdio.h>

int main() {
    long long int sum = 0;
    int n;
    char arr[51];
    scanf("%d %s", &n, arr);
    for (int i = 0; i < n; i++) {
        long long int a = 1;
        for (int j = 0; j < i; j++) {
            a *= 31;
            a %= 1234567891;
        }
        sum += (arr[i] - 96) * a;
        sum %= 1234567891;
    }
    printf("%lld", sum);
    return 0;
}