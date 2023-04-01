#include <stdio.h>

int main() {
    int n, m;
    char arr[10][10];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = m - 1; j >= 0; j--) {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}