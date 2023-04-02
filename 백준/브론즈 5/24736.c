#include <stdio.h>

int main(){
    
    int t, f, s, p, c;
    for (int i = 0; i<2; i++){
    scanf("%d %d %d %d %d", &t, &f, &s, &p, &c);
        printf("%d\n", t*6+f*3+s*2+p+c*2);
    }
    return 0;
}
