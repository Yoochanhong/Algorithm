#include <stdio.h>

long long int solution(int n) {
    long long int arr[2001] = {0, 1};
    for (int i = 2; i <= n + 1; i++) {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 1234567;
    }
    return arr[n + 1];
}
