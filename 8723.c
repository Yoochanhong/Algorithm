#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int comp(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int main() {
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    qsort(arr, 3, sizeof(int), comp);
    if (arr[0] == arr[1] && arr[1] == arr[2]) printf("2");
    else if (pow(arr[0], 2) + pow(arr[1], 2) == pow(arr[2], 2)) printf("1");
    else printf("0");
    return 0;
}