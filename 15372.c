#include <stdio.h>

int main() {

    long long int n, a;
    scanf("%lld", &n);
    while (n--) {
        scanf("%lld", &a);
        printf("%lld\n", a * a);
    }
    return 0;
}