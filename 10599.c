#include <stdio.h>

int main(){
    while(1){
        int arr[4], c=0;
        for (int i = 0; i<4; i++){
            scanf("%d", &arr[i]);
            if (arr[i] == 0) c++;
        }
        if (c == 4) break;
        printf("%d %d\n", arr[2] - arr[1], arr[3] - arr[0]);
    }
    return 0;
}
