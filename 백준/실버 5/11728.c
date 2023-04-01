#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int main() {
    int arr[2000000], a, b;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = a; i < b + a; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, a + b, sizeof(arr[0]), comp);
    for (int i = 0; i < a + b; i++) {
        printf("%d ", arr[i]);
    }
}