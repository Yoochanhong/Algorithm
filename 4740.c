#include <stdio.h>

int main(){
    
    int s = 0;
    char arr[81];
    while(1){
        gets(arr);
        if (arr[0] == '*' && arr[1] == '*' && arr[2] == '*'){
            break;
        }
        for (int i = 0; arr[i] != NULL; i++){
            s=i;
        }
            for (int i = s; i>=0; i--){
                printf("%c", arr[i]);
            }
            printf("\n");
    }
}
