#include <stdio.h>

int arr[31][31];

int combi(int a, int b) {
    if (a == b) return 1;
    else if (b == 1) return a;
    else {
        if (arr[a][b] != 0) return arr[a][b];
        arr[a][b] = combi(a - 1, b) + combi(a - 1, b - 1);
        return arr[a][b];
    }
}

int main() {
    int n, a, b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &b, &a);
        printf("%d\n", combi(a, b));
    }
    return 0;
}