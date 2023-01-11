#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int main() {
    int n, k, arr[50];
    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        qsort(arr, n, 4, comp);
        int gap = 0;
        for (int j = 0; j < n - 1; j++) {
            if (arr[j + 1] - arr[j] > gap) gap = arr[j + 1] - arr[j];
        }
        printf("Class %d\nMax %d, Min %d, Largest gap %d\n", i + 1, arr[n - 1], arr[0], gap);
    }
}