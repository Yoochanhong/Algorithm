#include <stdio.h>

int main() {

    int a, b, arr[1000], c = 0;
    scanf("%d %d", &a, &b);
    for (int i = 2; i <= a; i++) arr[i] = 1;
    for (int i = 2; i <= a; i++) {
        if (arr[i]) {
            for (int j = 1; i * j <= a; j++) {
                if (arr[i * j]) {
                    arr[i * j] = 0;
                    c++;
                    if (c == b) {
                        printf("%d", i * j);
                        return 0;
                    }
                }
            }
        }
    }
}