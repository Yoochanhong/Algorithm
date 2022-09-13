#include <stdio.h>

int main(){
    
    int s, m, l;
    scanf("%d %d %d", &s, &m, &l);
    if (s+m*2+l*3 >= 10) printf("happy");
    else printf("sad");
    return 0;
}

