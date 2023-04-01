#include<stdio.h>

int main() {
    int n, count = 0, arr[6] = {500, 100, 50, 10, 5, 1};
    scanf("%d", &n);
    int n1 = 1000 - n;
    for (int i = 0; i < 6; i++) {
        count += n1 / arr[i];
        n1 %= arr[i];
    }
    printf("%d", count);
    return 0;
}