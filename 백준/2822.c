#include <stdio.h>

int main() {
    int arr[8], arr1[8], sum = 0, min;
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
        arr1[i] = arr[i];
    }
    int temp;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7 - i; j++) {
            if (arr1[j] > arr1[j + 1]) {
                temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }
    for (int i = 3; i < 8; i++) {
        sum += arr1[i];
    }
    min = arr1[2];
    printf("%d\n", sum);
    for (int i = 0; i < 8; i++) {
        if (min < arr[i]) printf("%d ", i + 1);
    }
    return 0;
}