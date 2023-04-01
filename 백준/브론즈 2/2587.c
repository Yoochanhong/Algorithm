#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int main() {
    int arr[5], sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    qsort(arr, 5, 4, comp);
    printf("%d\n%d", sum / 5, arr[2]);
}