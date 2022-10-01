#include <stdio.h>
#include <string.h>

int main(){
    int n, sum = 2015;
    char arr[1001];
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        scanf("%s", arr);
        for (int j = 65; j<= 90; j++){
            for (int k = 0; k < strlen(arr); k++){
                if (arr[k] == j){
                    sum -= j;
                    break;
                }
            }
        }
        printf("%d\n", sum);
        sum = 2015;
    }
    return 0;
}
