#include <stdio.h>

int main() {
    int n;
    long long int arr[100];
    scanf("%d", &n);
    arr[1] = 1;
    for (int i = 2; i <= n; i++) arr[i] = arr[i - 1] + arr[i - 2];
    printf("%lld", arr[n]);
}