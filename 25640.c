#include <stdio.h>

int main(){
    int n, c = 0;
    char arr[4];
    scanf("%s %d", arr, &n);
    for (int i = 0; i<n; i++){
        int c1 = 0;
        char arr1[4];
        scanf("%s", arr1);
        for (int j = 0; j<4; j++){
            if (arr[j] == arr1[j]) c1++;
        }
        if (c1 == 4) c++;
    }
    printf("%d", c);
    return 0;
}
