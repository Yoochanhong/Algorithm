#include <stdio.h>

int main(){
    
    double n, sum=0;
    scanf("%lf", &n);
    while(1){
        sum = n;
        scanf("%lf", &n);
        if (n == 999) return 0;
        sum = n - sum;
        printf("%.2lf\n", sum);
    }
    return 0;
}
