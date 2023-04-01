#include <stdio.h>

int main(){
    
    int n, sum=0;
    char arr[51];
    scanf("%d", &n);
    scanf("%s", arr);
    for (int i = 0; i<n; i++){
        if (arr[i] == 'a' ||arr[i] == 'e'||arr[i] == 'i'||arr[i] == 'o'||arr[i] == 'u'){
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}
