#include<stdio.h>
#include <math.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int main() {
    int n, arr[3];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[j]);
        }
        qsort(arr, 3, sizeof(int), comp);
        printf("Scenario #%d:\n", i);
        if (pow(arr[0], 2) + pow(arr[1], 2) == pow(arr[2], 2)) printf("yes");
        else printf("no");
        if (i < n) printf("\n\n");
    }
    return 0;
}