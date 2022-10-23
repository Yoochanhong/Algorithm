#include <stdio.h>

int main(){

    int n;
    int a = 0, b = 1, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("%d", a);
    return 0;
}