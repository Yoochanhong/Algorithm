#include <stdio.h>

int main(){
    
    int n;
    while(1){
        scanf("%d", &n);
        if (n == 0) return 0;
        if (n <= 1000000) printf("%d\n", n);
        else if (n > 1000000 && n <= 5000000) printf("%d\n", n - n/10);
        else if (n > 5000000) printf("%d\n", n - n*2/10);
    }
    return 0;
}
