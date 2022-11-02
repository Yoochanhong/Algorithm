#include <stdio.h>

int main() {
    int count = 0;
    while (1){
        int n, arr[100];
        scanf("%d", &n);
        if (n == 0) break;
        for (int i = 0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        count++;
        printf("Case %d: Sorting... done!\n", count);
    }
}
