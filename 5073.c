#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int main() {
    int arr[3];
    while (1) {
        for (int i = 0; i < 3; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] == 0) return 0;
        }
        int count = 0;
        qsort(arr, 3, sizeof(int), comp);
        for (int i = 0; i < 2; i++) {
            if (arr[i] == arr[i + 1]) count++;
        }
        if (arr[0] + arr[1] <= arr[2]) printf("Invalid\n");
        else if (count == 2) printf("Equilateral\n");
        else if (count == 1) printf("Isosceles\n");
        else if (count == 0) printf("Scalene\n");
    }
}