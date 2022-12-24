#include <stdio.h>

int main() {
    int count = 0;
    char arr[8][8];
    for (int i = 0; i < 8; i++) {
        scanf("%s", arr[i]);
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0 && arr[i][j] == 'F') count++;
        }
    }
    printf("%d", count);
    return 0;
}