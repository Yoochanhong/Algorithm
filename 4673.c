#include <stdio.h>

int main() {
    int arr[10000000] = {0,};
    for (int i = 1; i <= 10000; i++) {
        int sum = i, s = i;
        while (s > 9) {
            sum += s % 10;
            s /= 10;
        }
        arr[sum + s] = 1;
    }
    for (int i = 1; i <= 10000; i++) {
        if (!arr[i]) printf("%d\n", i);
    }
    return 0;
}