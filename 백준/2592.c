#include<stdio.h>

int main() {
    int arr[10], in[1000] = {0,}, max = 0, sum = 0;
    double avg = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        avg += arr[i];
        in[arr[i]]++;
    }
    for (int i = 0; i < 1000; i++) {
        if (max < in[i]) {
            max = in[i];
            sum = i;
        }
    }
    printf("%.0lf\n%d", avg / 10, sum);
    return 0;
}