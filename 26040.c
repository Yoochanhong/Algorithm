#include <stdio.h>
#include <string.h>

int main() {
    char arr[100001], alpha[52];
    scanf("%s ", arr);
    gets(alpha);
    int len = strlen(alpha);
    int arrlen = strlen(arr);
    for (int i = 0; i < len; i += 2) {
        for (int j = 0; j < arrlen; j++) {
            if (arr[j] == alpha[i]) arr[j] += 32;
        }
    }
    printf("%s", arr);
    return 0;
}