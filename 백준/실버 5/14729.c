#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    if (*(double *) a > *(double *) b) return 1;
    else if (*(double *) a < *(double *) b) return -1;
    else return 0;
}

int main() {
    int n;
    double arr[10000000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }
    qsort(arr, n, sizeof(double), comp);
    for (int i = 0; i < 7; i++) {
        printf("%.3lf\n", arr[i]);
    }
    return 0;
}