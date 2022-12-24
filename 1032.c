#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char arr[51], arr1[51];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", arr);
        int len = strlen(arr);
        if (i == 0) {
            strcpy(arr1, arr);
            continue;
        }
        for (int j = 0; j < len; j++) {
            if (arr[j] == arr1[j]) arr1[j] = arr[j];
            else arr1[j] = '?';
        }
    }
    printf("%s", arr1);
    return 0;
}