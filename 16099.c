#include <stdio.h>

int main() {
    long long int n, arr[4];
    scanf("%lld", &n);
    for (int i = 0; i<n; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%lld", &arr[j]);
        }
        if (arr[0] * arr[1] > arr[2] * arr[3]) printf("TelecomParisTech\n");
        else if (arr[0] * arr[1] < arr[2] * arr[3]) printf("Eurecom\n");
        else printf("Tie\n");
    }
    return 0;
}