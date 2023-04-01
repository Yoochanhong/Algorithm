#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *a, const void *b) {
    int a1 = strlen((const char *) a);
    int b1 = strlen((const char *) b);
    if (a1 < b1) return -1;
    else if (a1 > b1) return 1;
    return strcmp((char *) a, (char *) b);
}

int main() {
    int n;
    char arr[20001][51];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%s", arr[i]);
    qsort(arr, n, sizeof(arr[0]), comp);
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i], arr[i + 1]) != 0) printf("%s\n", arr[i]);
    }
    return 0;
}