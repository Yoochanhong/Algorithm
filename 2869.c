#include <stdio.h>

int main()
{
    int a, b, v, sum=0;
    scanf("%d %d %d", &a, &b, &v);
    sum = (v-b-1)/(a-b)+1;
    printf("%d", sum);
    return 0;
}
