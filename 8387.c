#include <stdio.h>

int main() {
    int n, count = 0;
    char arr[100001], arr1[100001];
    scanf("%d", &n);
    scanf("%s %s", arr, arr1);
    for (int i = 0; i<n; i++){
        if (arr[i] == arr1[i]) count++;
    }
    printf("%d", count);
    return 0;
}