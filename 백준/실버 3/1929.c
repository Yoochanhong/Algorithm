#include <stdio.h>

int main() {
    int m, n, arr[1000000];
    scanf("%d %d", &m, &n);
    for (int i = 2; i <= n; i++) {
        arr[i] = i;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (arr[i] == 0) continue;
        for (int j = i * 2; j <= n; j += i) {
            arr[j] = 0;
        }
    }
    for (int i = m; i <= n; i++) {
        if (arr[i] != 0) printf("%d\n", arr[i]);
    }
    return 0;
}