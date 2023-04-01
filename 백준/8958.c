#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char arr[81];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", arr);
        int len = strlen(arr), sum = 0, count = 0;
        for (int j = 0; j < len; j++) {
            if (arr[j] == 'O') {
                count++;
                sum += count;
            } else count = 0;
        }
        printf("%d\n", sum);
    }
    return 0;
}