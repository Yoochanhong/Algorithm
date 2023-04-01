#include <stdio.h>

int main(){
    
    int a, b;
    scanf("%d %d", &a, &b);
    a = a/100 + a%10*100 + a%100/10*10;
    b = b/100 + b%10*100 + b%100/10*10;
    printf("%d", a > b ? a: b);
    return 0;
}
