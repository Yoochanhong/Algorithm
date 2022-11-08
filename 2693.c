#include<stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return (*(int *) b - *(int *) a);
}

int main() {
    int n, arr[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &arr[j]);
        }
        qsort(arr, 10, sizeof(int), comp);
        printf("%d\n", arr[2]);
    }
    return 0;
}