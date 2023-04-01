#include <stdio.h>
#include <string.h>

int main()
{

    int j=0;
    char arr[100]={0}, arri[100];
    scanf("%s", arr);
    for (int i = 0; arr[i] != 0; i++) {
        if (arr[i] >=65 && arr[i] <=90) {
            arri[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i<strlen(arri); i++) {
        printf("%c", arri[i]);
    }
    return 0;
}

