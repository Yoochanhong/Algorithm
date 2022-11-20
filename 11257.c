#include <stdio.h>

int main() {
    int n, a, arr[3];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int sum = 0;
        scanf("%d", &a);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        if (sum < 55) printf("%d %d FAIL\n", a, sum);
        else {
            if (arr[0] < 10.5 || arr[1] < 7.5 || arr[2] < 12) printf("%d %d FAIL\n", a, sum);
            else printf("%d %d PASS\n", a, sum);
        }
    }
    return 0;
}