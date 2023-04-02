#include <stdio.h>

int main(){
    
    int n, h, l;
    scanf("%d", &n);
    h = n/2;
    l = n%2;
    if (h == 0 && l == 1) printf("0");
    else if (h == 0 && l == 0) printf("1");
    else {
        if (l == 0){
            for (int i = 0; i<h; i++){
                printf("8");
            }
        }
        else{
            printf("4");
            for (int i = 0; i<h; i++){
                printf("8");
            }
        }
    }
    return 0;
}
