#include <stdio.h>

int main(){
    
    int a, b, t;
    scanf("%d %d", &a, &b);
    t = (a+b)%12;
    if (t == 0) printf("12");
    else printf("%d", t);
    return 0;
}
