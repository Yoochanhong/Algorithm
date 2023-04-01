#include <stdio.h>
#include <string.h>


void sprintf_s(int n, char *arr) {
    char arr1[10001];
    for (int i = 0; i < n; i++) {
        arr1[i] = arr[i];
    }
    for (int i = 0; i < 10001; i++) {
        arr[i] = '0';
    }
    for (int i = 10000 - n, j = 0; i < 10001; i++, j++) {
        arr[i] = arr1[j];
    }
}

int main() {
    char arr[10001] = {0,}, arr1[10001] = {0,}, result[10002] = {0,};
    int carry = 0, sum = 0, k;
    scanf("%s %s", arr, arr1);
    int len = sizeof(arr) > sizeof(arr1) ? sizeof(arr) : sizeof(arr1);
    sprintf_s(strlen(arr), arr);
    sprintf_s(strlen(arr1), arr1);
    for (int i = len - 2; i >= 0; i--) {
        sum = (arr[i] - '0') + (arr1[i] - '0') + carry;
        carry = sum / 10;
        sum %= 10;
        result[i + 1] = sum + '0';
    }
    result[0] = carry + '0';
    while (result[k] == '0') k++;
    printf("%s\n", result + k);
    return 0;
}
