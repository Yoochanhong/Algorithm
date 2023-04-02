#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == 0 && b == 0) printf("Not a moose");
    else {
        if (a == b) printf("Even %d", a*2);
        else{
            printf("Odd %d", a>b ? a*2 : b*2);
        }
    }
    return 0;
}
