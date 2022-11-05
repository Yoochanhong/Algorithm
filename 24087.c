#include <stdio.h>

int main() {
    int s, a, b, sum = 0;
    scanf("%d %d %d", &s, &a, &b);
    if (s <= a) printf("250");
    else {
        if ((s - a) % b != 0) printf("%d", 250 + ((s - a) / b + 1) * 100);
        else printf("%d", 250 + (s - a) / b * 100);
    }
}