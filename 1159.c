#include <stdio.h>

int main() {
    char arr[31];
    int alpha[26] = {0,};
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", arr);
        alpha[arr[0] - 97]++;
    }
    for (int i = 0; i < 26; i++) {
        if (alpha[i] >= 5) {
            printf("%c", i + 97);
            sum++;
        }
    }
    if (sum == 0) {
        printf("PREDAJA");
    }
    return 0;
}