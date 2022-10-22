#include <stdio.h>
#include <string.h>

int main() {
    char arr[7], arr1[7], arr2[7];
    unsigned long long a = 0;

    scanf("%s", arr);
    if (strcmp(arr, "black") == 0) a += 0;
    else if (strcmp(arr, "brown") == 0) a += 10;
    else if (strcmp(arr, "red") == 0) a += 20;
    else if (strcmp(arr, "orange") == 0) a += 30;
    else if (strcmp(arr, "yellow") == 0) a += 40;
    else if (strcmp(arr, "green") == 0) a += 50;
    else if (strcmp(arr, "blue") == 0) a += 60;
    else if (strcmp(arr, "violet") == 0) a += 70;
    else if (strcmp(arr, "grey") == 0) a += 80;
    else if (strcmp(arr, "white") == 0) a += 90;


    scanf("%s", arr1);
    if (strcmp(arr1, "black") == 0) a += 0;
    else if (strcmp(arr1, "brown") == 0) a += 1;
    else if (strcmp(arr1, "red") == 0) a += 2;
    else if (strcmp(arr1, "orange") == 0) a += 3;
    else if (strcmp(arr1, "yellow") == 0) a += 4;
    else if (strcmp(arr1, "green") == 0) a += 5;
    else if (strcmp(arr1, "blue") == 0) a += 6;
    else if (strcmp(arr1, "violet") == 0) a += 7;
    else if (strcmp(arr1, "grey") == 0) a += 8;
    else if (strcmp(arr1, "white") == 0) a += 9;


    scanf("%s", arr2);
    if (strcmp(arr2, "black") == 0) a *= 1;
    else if (strcmp(arr2, "brown") == 0) a *= 10;
    else if (strcmp(arr2, "red") == 0) a *= 100;
    else if (strcmp(arr2, "orange") == 0) a *= 1000;
    else if (strcmp(arr2, "yellow") == 0) a *= 10000;
    else if (strcmp(arr2, "green") == 0) a *= 100000;
    else if (strcmp(arr2, "blue") == 0) a *= 1000000;
    else if (strcmp(arr2, "violet") == 0) a *= 10000000;
    else if (strcmp(arr2, "grey") == 0) a *= 100000000;
    else if (strcmp(arr2, "white") == 0) a *= 1000000000;


    printf("%lld", a);
}
