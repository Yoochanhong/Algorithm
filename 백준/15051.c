#include <stdio.h>

int main() {
    int a, b, c;
    int arr[3], min = 10000;
    scanf("%d %d %d", &a, &b, &c);
    arr[0] = b*2+c*4;
    arr[1] = a*2+c*2;
    arr[2] = a*4+b*2;
    for (int i = 0; i<3; i++){
        if (min>arr[i]) min = arr[i];
    }
    printf("%d", min);
    return 0;
}
