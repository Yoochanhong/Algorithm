#include<stdio.h>

int main() {
    char arr[10000];
    scanf("%[^*]s", &arr);
    printf("%s", arr);
    return 0;
}