#include <stdio.h>

int solution(int n) {
    int arr[100001] = {0, 1};
    for (int i = 2; i <= n; i++){
        arr[i] = (arr[i - 1] + arr[i - 2]) % 1234567;
    }
    return arr[n];
}
