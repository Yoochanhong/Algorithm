#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    int alpha[26];
    for (int i = 0; i < 26; i++) {
        alpha[i] = -1;
    }
    scanf("%s", arr);
    int len = strlen(arr);
    for (int i = 0; i < len; i++) {
        for (int j = 97; j < 123; j++) {
            if (arr[i] == j &&  alpha[j - 97] == -1) {
                alpha[j - 97] = i;
            }
        }
    }
    for (int i = 0; i < 26; i++) {
        printf("%d ", alpha[i]);
    }
    return 0;
}