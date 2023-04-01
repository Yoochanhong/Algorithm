#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

struct Judge {
    int n;
    char array[101];
} arr[100000];


int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &arr[i].n, arr[i].array);
    }
    qsort(arr, n, sizeof(arr[0]), comp);
    for (int i = 0; i < n; i++) {
        printf("%d %s\n", arr[i].n, arr[i].array);
    }
}