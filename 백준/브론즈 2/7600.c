#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    while (1) {
        char arr[251];
        int count = 0;
        gets(arr);
        if (arr[0] == '#') return 0;
        int len = strlen(arr);
        for (int i = 0; i < len; i++) arr[i] = toupper(arr[i]);
        for (char i = 65; i < 91; i++) {
            for (int j = 0; j < len; j++) {
                if (arr[j] == i) {
                    count++;
                    break;
                }
            }
        }
        printf("%d\n", count);
    }
}