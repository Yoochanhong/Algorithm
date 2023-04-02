#include <stdio.h>

int main(){
    
    int arr[3], c = 0;
    for (int i = 0; i<3; i++){
        scanf("%d", &arr[i]);
        if (arr[i] == 1) c++;
    }
    if (c > 1) printf("1");
    else printf("2");
    return 0;
}
