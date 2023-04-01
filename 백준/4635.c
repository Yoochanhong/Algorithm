#include <stdio.h>

int main(){
    
    int n, t, s, s1 = 0, sum=0;
    while(1){
        scanf("%d", &n);
        if (n == -1) return 0;
        for (int i = 0; i < n; i++){
            scanf("%d %d", &s, &t);
            sum += s * (t-s1);
            s1 = t;
        } printf("%d miles\n", sum);
        sum = 0;
      s1 = 0;
    }
    return 0;
}
