#include<stdio.h>

int main() {
    int n, arr[1000], count = 0, c, j, arr1[1000];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        arr[0] = n;
        arr[1] = i;
        for (j = 2; arr[j - 2] >= arr[j - 1]; j++) {
            arr[j] = arr[j - 2] - arr[j - 1];
        }
        if (count <= j) {
            count = j;
            for (int k = 0; k < j; k++) {
                arr1[k] = arr[k];
            }
        }
    }
    printf("%d\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d ", arr1[i]);
    }
}