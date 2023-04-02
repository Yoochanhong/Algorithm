#include <stdio.h>

int main() {
    int c = 0;
    char n;
    while (scanf("%c", &n) != EOF) if (n == '\n') c++;
    printf("%d", c);
    return 0;
}