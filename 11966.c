#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    while(1){
        if (n == 1){
            printf("1");
            break;
        }
        if (n%2 == 0){
            n/=2;
        }
        else {
            printf("0");
            break;
        }
    }
    return 0;
}
