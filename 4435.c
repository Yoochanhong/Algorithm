#include <stdio.h>

int main(){
    
    int n;
    int aarr[6], barr[7], asum, bsum;
    scanf("%d", &n);
    for (int i = 1; i<=n; i++){
        for (int j = 0; j<6; j++){
            scanf("%d", &aarr[j]);
        }
        for (int k = 0; k<7; k++){
            scanf("%d", &barr[k]);
        }
        asum = aarr[0] * 1 + aarr[1] * 2 + aarr[2] * 3 + aarr[3] * 3 + aarr[4] * 4 + aarr[5] * 10;
        bsum = barr[0] * 1 + barr[1] * 2 + barr[2] * 2 + barr[3] * 2 + barr[4] * 3 + barr[5] * 5 + barr[6] * 10;
        if (asum > bsum) printf("Battle %d: Good triumphs over Evil\n", i);
        else if (asum < bsum) printf("Battle %d: Evil eradicates all trace of Good\n", i);
        else printf("Battle %d: No victor on this battle field\n", i);
    }
    return 0;
}
