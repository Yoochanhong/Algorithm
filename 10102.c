#include <stdio.h>

int main() {
    int n, c=0;
    char arr[16];
    scanf("%d %s", &n, arr);
    for (int i = 0; i<n; i++){
        if (arr[i] == 'A') c++;
        else c--;
    }
    if (c > 0) printf("A");
    else if (c < 0) printf("B");
    else printf("Tie");
    return 0;
}
