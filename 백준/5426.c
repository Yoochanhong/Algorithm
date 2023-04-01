#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int n;
    char arr[10001], arr1[101][101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int count = 0;
        scanf("%s", arr);
        int len = sqrt(strlen(arr));
        for (int j = 0; j < len; j++) {
            for (int k = 0; k < len; k++) {
                arr1[j][k] = arr[count];
                count++;
            }
        }
        for (int j = len - 1; j >= 0; j--) {
            for (int k = 0; k < len; k++) {
                printf("%c", arr1[k][j]);
            }
        }
        printf("\n");
    }
    return 0;
}