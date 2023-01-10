#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char array[1001];
} string;

int comp(const void *a, const void *b) {
    return strcmp((char *) a, (char *) b);
}

int main() {
    char arr[1001];
    string array[1001];
    scanf("%s", arr);
    int len = strlen(arr);
    for (int i = 0; i < len; i++) {
        strcpy(array[i].array, arr);
        for (int j = 0; j < len - i; j++) {
            arr[j] = arr[j + 1];
        }
    }
    qsort(array, len, sizeof(array[0]), comp);
    for (int i = 0; i < len; i++) {
        printf("%s\n", array[i].array);
    }
    return 0;
}