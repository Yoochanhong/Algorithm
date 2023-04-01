#include<stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b) {
    return(*(int*)a - *(int*)b);
}



int main() {
    int n, arr[1000000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), comp);
    for (int i = n-1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }
    return 0;
}