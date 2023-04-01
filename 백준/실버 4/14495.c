#include <stdio.h>

int main() {
    int n;
    long long int arr[117] = {0, 1, 1, 1};
    scanf("%d", &n);
    for (int i = 4; i <= n; i++) {
        arr[i] = arr[i - 1] + arr[i - 3];
    }
    printf("%lld", arr[n]);
}