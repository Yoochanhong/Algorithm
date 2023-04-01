#include <stdio.h>

int arr[1000][1000];

int combi(int n, int k) {
    if (n == k || k == 0) return 1;
    else {
        if (arr[n][k] != 0) return arr[n][k];
        arr[n][k] = (combi(n - 1, k) + combi(n - 1, k - 1)) % 10007;
        return arr[n][k];
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", combi(n, k));
    return 0;
}