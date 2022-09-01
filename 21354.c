#include <stdio.h>

int main(){
    
    int a, b;
    scanf("%d %d", &a, &b);
    if (a*7>b*13){
        printf("Axel");
    }
    else if (a*7<b*13){
        printf("Petra");
    }
    else printf("lika");
    return 0;
}
