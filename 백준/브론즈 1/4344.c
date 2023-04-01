#include <stdio.h>

int main() {
    int n, c, arr[1000];
    scanf("%d", &c);
    for (int i = 0; i < c; i++) {
        double ave = 0, per = 0;
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
            ave += arr[j];
        }
        ave /= n;
        for (int j = 0; j < n; j++) {
            if (ave < arr[j]) per++;
        }
        printf("%.3lf%%\n", per / n * 100);
    }
    return 0;
}