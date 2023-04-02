#include <stdio.h>

int main(){

    int n, c=0;
    scanf("%d", &n);
    for (int i = 1; i<=n; i++){
        if (n%i==0) c+=i;
    }
    printf("%d", c*5-24);
    return 0;
}