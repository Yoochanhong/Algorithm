#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n, arr[501][501], big = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) arr[i][j] += arr[i - 1][j];
            else if (j == i) arr[i][j] += arr[i - 1][j - 1];
            else arr[i][j] += max(arr[i - 1][j], arr[i - 1][j - 1]);
        }
    }
    for (int i = 1; i <= n; i++) {
        if (arr[n][i] > big) big = arr[n][i];
    }
    printf("%d", big);
}