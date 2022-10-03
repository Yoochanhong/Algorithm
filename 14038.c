#include <stdio.h>

int main()
{
    int sum = 0;
    char arr[7];
    for (int i = 0; i < 6; i++) {
        scanf(" %c", &arr[i]);
        if (arr[i] == 'W') sum++;
    }
    if (sum == 5 || sum == 6) printf("1");
    else if (sum == 3 || sum == 4) printf("2");
    else if (sum == 1 || sum == 2) printf("3");
    else printf("-1");
    return 0;
}