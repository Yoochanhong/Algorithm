#include <stdio.h>

int main(){
    int arr[3], temp;
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    for (int i = 2; i>=1; i--){
        for (int j = 0; j<=i-1; j++){
            if (arr[j]> arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("%d", arr[1]);
    return 0;
}
