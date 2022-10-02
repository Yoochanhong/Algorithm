#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a == 8 || a == 9) {
        if (d == 8 || d == 9) {
            if (b == c) {
                printf("ignore");
            }
            else printf("answer");
        }
        else printf("answer");
    }
    else printf("answer");
    return 0;
}