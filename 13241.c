#include <stdio.h>

int Euclidean(long long int a, long long int b) {
    long long int r = a % b;
    if (r == 0) {
        return b;
    }
    return Euclidean(b, r);
}

int lcm(long long int a, long long int b) {
    return a * b / Euclidean(a, b);
}

int main() {
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", lcm(a, b));
    return 0;
}