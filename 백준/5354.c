#include <stdio.h>

int main(){
    int n, s;
    scanf("%d", &n);
    for (int i = 0; i<n; i++){
        scanf("%d", &s);
        for (int j = 0; j<s; j++){
            for (int k = 0; k<s; k++){
                if (j != 0 && j != s-1 && k != 0 && k != s-1)printf("J");
                else printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }
}
