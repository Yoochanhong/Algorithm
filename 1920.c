#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    int *a1 = (int *) a, *b1 = (int *) b;
    if (*a1 > *b1) return 1;
    else if (*a1 < *b1) return -1;
    return 0;
}

int bs(int *array, int k, int start, int end) {
    while (start <= end) {
        int mid = (start + end) / 2;
        if (array[mid] == k) return 1;
        else if (array[mid] > k) end = mid - 1;
        else start = mid + 1;
    }
    return 0;
}

int main() {
    int n, m, arr[100000], arr1[100000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), comp);
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
        printf("%d\n", bs(arr, arr1[i], 0, n - 1));
    }
}