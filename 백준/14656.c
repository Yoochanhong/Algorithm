#include <stdio.h>

int main(){
    int n, arr[20000], c = 0 ;
    scanf("%d", &n);
    for (int i = 1; i<=n; i++){
        scanf("%d", &arr[i]);
        if (arr[i] != i) c++;
    }
    printf("%d", c);
    return 0;
}
