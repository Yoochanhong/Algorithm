#include <stdio.h>

int main() {
    int n, arr[10], k = 0;
    scanf("%d", &n);
    while (n > 0) {
        arr[k] = n % 10;
        n /= 10;
        k++;
    }
    int temp;
    for (int i = 0; i < k - 1; i++) {
        for (int j = 0; j < k - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < k; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}