#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int main() {
    int n, arr[1000], sum = 0, a = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), comp);
    for (int i = 0; i < n; i++) {
        a += arr[i];
        sum += a;
    }
    printf("%d", sum);
}