#include <stdio.h>

int main(){
    
    int n, m;
    scanf("%d %d", &n, &m);
    n = n * 8 + m * 3;
    if (n>28) printf("%d", n-28);
    else printf("0");
    return 0;
}
