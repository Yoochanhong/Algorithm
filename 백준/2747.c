#include <stdio.h>

int arr[10000] = {0, 1};

int fibo(int n) {
    for (int i = 2; i < n + 1; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}