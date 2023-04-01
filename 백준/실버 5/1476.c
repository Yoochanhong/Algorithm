#include <stdio.h>

int main() {
    int a, b, c, i=0;
    int a1, b1, c1;
    scanf("%d %d %d", &a, &b, &c);
    while (1) {
        a1 = i%15, b1 = i%28, c1 = i%19;
        if (a1 == a-1 && b1 == b-1 && c1 == c-1) break;
        i++;
    }
    printf("%d", i+1);
    return 0;
}
