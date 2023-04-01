#include <stdio.h>
#include <string.h>

int main() {
    char a[] = {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'\nZXCVBNM,./"}, arr[100000];
    while (gets(arr)) {
        int len = strlen(arr), aLen = strlen(a);
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < aLen; j++) {
                if (arr[i] == a[j]) {
                    arr[i] = a[j - 1];
                    break;
                }
            }
        }
        printf("%s\n", arr);
    }
    return 0;
}