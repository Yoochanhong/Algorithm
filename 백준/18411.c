#include <stdio.h>

int main(){
    
    int arr[3], min=101, index=0, sum=0;
    for (int i = 0; i<3; i++){
        scanf("%d", &arr[i]);
        if (min>=arr[i]) {
            index = i;
            min = arr[i];
        }
    }
    for (int j = 0; j<3; j++){
        if (index == j) continue;
        sum+=arr[j];
    }
    printf("%d", sum);
    return 0;
}
