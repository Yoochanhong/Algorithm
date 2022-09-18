#include <stdio.h>

int main(){
    
    int n, sum=0;
    int arr[5];
    scanf("%d", &n);
    for (int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
        if (arr[i] == n) sum ++;
    }
    printf("%d", sum);
    return 0;
}
