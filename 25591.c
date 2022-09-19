#include <stdio.h>

int main(){
    
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d %d %d %d %d %d\n%d %d", 100-n, 100-m,m+n-100, (100-n)*(100-m), (100-n)*(100-m)/100, (100-n)*(100-m)%100, m+n-100+(100-n)*(100-m)/100, (100-n)*(100-m)%100);
    return 0;
}
