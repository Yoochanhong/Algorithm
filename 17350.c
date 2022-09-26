#include <stdio.h>
#include <string.h>

int main(){
    int n, k = 0;
    char arr[100];
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%s", arr);
        if (strcmp(arr, "anj") == 0) k++;
    }
    if (k == 1) printf("뭐야;");
    else printf("뭐야?");
    return 0;
}
