#include <stdio.h>

int main(){
    
    long long int a, b, c, sum;
    scanf("%lld %lld %lld", &a, &b, &c);
    sum = a/(c-b)+1;
    if (b>=c) printf("-1");
    else printf("%lld", sum);
    return 0;
}
