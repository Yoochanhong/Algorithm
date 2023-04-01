#include <stdio.h>

int arr[15][15];

int f(int k, int n) {
    for (int i = 0; i <= 14; i++) {
        arr[0][i] = i;
    }
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }
    return arr[k][n];
}

int main() {
    int t, n, k;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &k, &n);
        printf("%d\n", f(k, n));
    }
    return 0;
}