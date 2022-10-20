#include <stdio.h>
#include <string.h>

int main(){

    char arr[10001];
    gets(arr);
    int len = strlen(arr);
    for (int i = 0; i<len; i++){
        if ((arr[i] == 68 && arr[i+1] == 50 )|| (arr[i] == 100 && arr[i+1] == 50)){
            printf("D2");
            return 0;
        }
    }
    printf("unrated");
    return 0;
}