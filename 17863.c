#include <stdio.h>

int main(){
    int i = 0;
    char arr[8];
    scanf("%s", arr);
    if (arr[i] == '5' && arr[i+1] == '5' && arr[i+2] == '5'){
        printf("YES");
    }
    else printf("NO");
    return 0;
}
