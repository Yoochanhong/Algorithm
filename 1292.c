#include <stdio.h>

int main() {
    int a, b, sum = 0, arr[1000000], k = 0;
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= b; i++) {
        for (int j = 0; j < i; j++) {
            arr[k] = i;
            k++;
        }
    }
    for (int i = a - 1; i < b; i++) {
        sum += arr[i];
    }
    printf("%d", sum);
}