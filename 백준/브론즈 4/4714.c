#include <stdio.h>

int main()
{
    double n;
    while (1) {
        scanf("%lf", &n);
        if (n < 0) break;
        printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n", n, n * 0.167);
    }
    return 0;
}