#include <stdio.h>

int main(){
    int arr[9][9], big=0, jpi, jpj, i, j;
    for (i = 0; i<9; i++) {
        for (j = 0; j<9; j++){
            scanf("%d", &arr[i][j]);
            if (big <= arr[i][j]){
                big = arr[i][j];
                jpi = i;
                jpj = j;
            }
        }
    }
    printf("%d\n%d %d", big, jpi+1, jpj+1);
    return 0;
}
