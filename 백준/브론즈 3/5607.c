#include <stdio.h>

int main(){
    
    int n, a, b, asum = 0, bsum = 0;
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        scanf("%d %d", &a, &b);
        if (a > b) asum += a+b;
        else if (a < b) bsum += a+b;
        else {
            asum += a;
            bsum += a;
        }
    }
    printf("%d %d", asum, bsum);
    return 0;
}
