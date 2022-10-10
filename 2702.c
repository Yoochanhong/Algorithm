#include <stdio.h>

int main(){
    int n, a, b, c, d;
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        scanf("%d %d", &a, &b);
        int big = a > b ? a : b;
        for (int j = 1; j<=big; j++){
            if (a%j == 0 && b%j == 0) c = j;
        }
        for (int j = c; ; j++){
            if (j%a == 0 && j%b == 0){
                d = j;
                break;
            }
        }
        printf("%d %d\n", d, c);
    }
    return 0;
}
