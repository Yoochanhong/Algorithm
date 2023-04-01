#include <stdio.h>

int main(){
    
    int n, s;
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        scanf("%d", &s);
        int s1 = s;
        int sum = 0;
        if (s == 1) {
            printf("1\n");
            continue;
        }
        else if (s == 100000) {
            printf("100000\n");
            continue;
        }
        else {
            while(s != 1){
                if (s % 2 == 0) s/=2;
                else s = 3*s+1;
                if (s > sum) sum = s;
            }
        }
        if (s1 < sum) printf("%d\n", sum);
        else printf("%d\n", s1);
    }
    return 0;
}
