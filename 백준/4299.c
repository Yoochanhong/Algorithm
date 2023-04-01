#include <stdio.h>

int main(){

    int a, b, n, m;
    scanf("%d %d", &n, &m);
    if ((n-m)<0||(n-m)%2==1){
        printf("-1");
    }
    else {
        a = (n+m)/2;
        b = (n-m)/2;
        printf("%d %d", a, b);
    }
    return 0;
}
