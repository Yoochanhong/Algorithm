#include <stdio.h>
#include <string.h>

int main(){
    
    char arr[1000001];
    scanf("%s", arr);
    len = strlen(arr);
    for (int i = 0; i<len; i++){
        arr[i] -=32;
        printf("%c", arr[i]);
    }
    return 0;
}
