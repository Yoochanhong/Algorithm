#include<stdio.h>
#include <string.h>


int main() {
    char arr[1000001];
    int count = 0;
    gets(arr);
    int len = strlen(arr);
    if (strlen(arr) == 0 || (strlen(arr) == 1) && arr[0] == ' ') {
        printf("0");
        return 0;
    }
    if (arr[0] == ' ') arr[0] = 's';
    if (arr[len - 1] == ' ') arr[len - 1] = 's';
    for (int i = 0; i < len; i++) {
        if (arr[i] == ' ') count++;
    }
    printf("%d", count + 1);
    return 0;
}