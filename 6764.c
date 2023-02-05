#include <stdio.h>

int main() {
    int arr[4], u = 0, d = 0, s = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < 4; i++) {
        if (arr[i] > arr[i - 1]) u++;
        else if (arr[i] < arr[i - 1]) d++;
        else s++;
    }
    if (u == 3) printf("Fish Rising");
    else if (d == 3) printf("Fish Diving");
    else if (s == 3) printf("Fish At Constant Depth");
    else printf("No Fish");
    return 0;
}