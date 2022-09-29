#include <stdio.h>

int main(){
    
    int n, m;
    scanf("%d %d", &n, &m);
    long long int h[n], a[m], hbig = 0, abig = 0;
    for (int i = 0; i<n; i++){
        scanf("%lld", &h[i]);
        if (hbig < h[i]) hbig = h[i];
    }
    for (int i = 0; i<m; i++){
        scanf("%lld", &a[i]);
        if (abig < a[i]) abig = a[i];
    }
    printf("%lld", hbig + abig);
    return 0;
}
