#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return (*(int *) b - *(int *) a);
}

int main() {
    char arr[1000001];
    int arr1[1000001], sum = 0;
    scanf("%s", arr);
    int len = strlen(arr);
    for (int i = 0; i < len; i++) {
        arr1[i] = arr[i] - '0';
        sum += arr1[i];
    }
    qsort(arr1, len, sizeof(int), comp);
    if (arr1[len-1] == 0 && sum % 3 == 0) for (int i = 0; i < len; i++) printf("%d", arr1[i]);
    else printf("-1");
}