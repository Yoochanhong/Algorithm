#include <stdio.h>
#include <string.h>

int main(){
    
    char arr[16], arrmin[16], arrbig[16];
    int y, m, d, n, s, min = 0, big=20111332;
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        scanf("%s %d %d %d", arr, &d, &m, &y);
        s = d + m*100 + y*1000;
        if (min < s){
            min = s;
            for (int j = 0; j<16; j++){
                arrmin[j] = arr[j];
            }
        }
        if (big > s){
            big = s;
            for (int j = 0; j<16; j++){
                arrbig[j] = arr[j];
            }
        }
    }
    printf("%s\n%s", arrmin, arrbig);
    return 0;
}
