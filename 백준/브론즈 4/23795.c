#include <stdio.h>

int main()
{
    long long int sum = 0, arr[2000];
    int i = 0;
    while(1){
        scanf("%lld", &arr[i]);
        if (arr[i] == -1){
            break;
        }
        sum+=arr[i];
    }
    printf("%lld", sum);
    
    return 0;
}
