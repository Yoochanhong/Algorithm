#include<stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    long long int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    qsort(arr, n, sizeof(long long int), comp);
    printf("%lld", arr[k - 1]);

    return 0;
}