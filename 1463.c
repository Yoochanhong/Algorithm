#include <stdio.h>

long long int arr[10000000];

void make_one(long long int n) {
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    for (int i = 4; i <= n; i++) {
        if (i % 6 == 0) {
            if (arr[i / 3] < arr[i / 2]) {
                arr[i] = arr[i / 3] + 1;
            } else arr[i] = arr[i / 2] + 1;
        } else if (i % 3 == 0) {
            if (arr[i / 3] < arr[i - 1]) {
                arr[i] = arr[i / 3] + 1;
            } else arr[i] = arr[i - 1] + 1;
        } else if (i % 2 == 0) {
            if (arr[i / 2] < arr[i - 1]) {
                arr[i] = arr[i / 2] + 1;
            } else arr[i] = arr[i - 1] + 1;
        } else arr[i] = arr[i - 1] + 1;
    }
}

int main() {
    long long int n;
    scanf("%lld", &n);
    make_one(n);
    printf("%lld", arr[n]);
    return 0;
}