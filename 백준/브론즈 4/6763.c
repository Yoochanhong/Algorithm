#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a >= b) printf("Congratulations, you are within the speed limit!");
    else {
        int x;
        if (b - a >= 1 && b - a <= 20) x = 100;
        else if (b - a >= 21 && b - a <= 30) x = 270;
        else x = 500;
        printf("You are speeding and your fine is $%d.", x);
    }
    return 0;
}