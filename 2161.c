#include <stdio.h>

int main() {

    int n, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    while(n >= 1){
        printf("%d ", arr[0]);
        for (int i = 0; i<n; i++){
            arr[i] = arr[i+1];
        }
        int key = arr[0];
        for (int i = 0; i<n; i++){
            arr[i] = arr[i+1];
        }
        arr[n-2] = key;
        n--;
    }
    return 0;
}