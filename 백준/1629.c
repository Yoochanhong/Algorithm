#include <stdio.h>

long long int pow(long long int a, long long int b, long long int c) {
    if (b == 0) return 1;
    else {
        long long int d = pow(a, b / 2, c);
        if (b % 2 == 0) return d % c * d % c % c;
        else return d * d % c * a % c;
    }
}


int main() {
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld", pow(a, b, c));
    return 0;
}