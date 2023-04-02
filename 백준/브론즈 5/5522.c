#include <stdio.h>

int main() {

    int sum = 0, a;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a);
        sum += a;
    }
    printf("%d", sum);
    return 0;
}