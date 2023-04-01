#include <stdio.h>

int main(){
    int n, f;
    scanf("%d %d", &n, &f);
    for(int i = n/100*100; ; i++){
        if (i%f == 0) {
            if (i%100/10 == 0) printf("0%d", i%100);
            else printf("%d", i%100);
            break;
        }
    }
}
