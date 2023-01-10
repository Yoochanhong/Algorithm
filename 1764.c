#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char arr[51];
} string;

int comp(const void* a, const void* b) {
    if (strcmp((char*)a, (char*)b) > 0) return 1;
    else if (strcmp((char*)a, (char*)b) < 0) return -1;
    else return 0;
}

int main() {
    string arr[1000000], arr1[1000000];
    int n, m, count = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n + m; i++) {
        scanf("%s", arr[i].arr);
    }
    qsort(arr, n + m, sizeof(arr[0]), comp);
    for (int i = 0; i < n + m; i++) {
        if (strcmp(arr[i].arr, arr[i + 1].arr) == 0) {
            strcpy(arr1[count].arr, arr[i].arr);
            count++;
        }
    }
    qsort(arr1, count, sizeof(arr1[0]), comp);
    printf("%d\n", count);
    for (int i = 0; i < count; i++) {
        printf("%s\n", arr1[i].arr);
    }
    return 0;
}