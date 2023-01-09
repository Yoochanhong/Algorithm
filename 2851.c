#include <stdio.h>

int main() {
    int arr[10], sum = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
        if (sum + arr[i + 1] > 100) {
            if (sum + arr[i + 1] - 100 <= 100 - sum) sum += arr[i + 1];
            break;
        }
    }
    printf("%d", sum);
    return 0;
}