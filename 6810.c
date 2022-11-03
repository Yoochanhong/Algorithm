#include <stdio.h>

int main() {
    int sum = 91;
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("The 1-3-sum is %d", sum + a + b * 3 + c);
}
