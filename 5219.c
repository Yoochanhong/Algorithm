#include <stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("Pairs for %d:", arr[i]);
        for (int j = 1; j <= arr[i]; j++) {
            if (j < arr[i] - j) {
                if (j > 1) printf(", %d %d", j, arr[i] - j);
                else printf(" %d %d", j, arr[i] - j);
            }
        }
        printf("\n");
    }
    return 0;
}