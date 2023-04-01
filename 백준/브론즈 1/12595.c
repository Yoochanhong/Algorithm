#include<stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int main() {
    int n, g, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &g);
        for (int j = 0; j < g; j++) {
            scanf("%d", &arr[j]);
        }
        qsort(arr, g, sizeof(int), comp);
        for (int j = 0; j < g; j++) {
            if (arr[j] == arr[j + 1]) {
                arr[j] = -1;
                arr[j + 1] = -1;
                j++;
            }
        }
        for (int j = 0; j < g; j++) {
            if (arr[j] != -1) printf("Case #%d: %d\n", i + 1, arr[j]);
        }
    }
}