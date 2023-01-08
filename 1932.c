#include <stdio.h>

int max(int a, int b) {
    if (a > b) return a;
    else return b;
}

int main() {
    int n, arr[501][501], dp[501][501] = {0,}, big = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    dp[1][1] = arr[1][1];
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) dp[i][j] = dp[i - 1][j] + arr[i][j];
            else if (j == i) dp[i][j] = dp[i - 1][j - 1] + arr[i][j];
            else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        if (dp[n][i] > big) big = dp[n][i];
    }
    printf("%d", big);
}