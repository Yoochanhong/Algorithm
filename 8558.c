#include <stdio.h>

int main()
{
    int n, p=1;
    scanf("%d", &n);
    for (int i = 1; i<=n; i++){
        p *=i;
        p %=10;
    }
    printf("%d", p);
    return 0;
}
