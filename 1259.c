#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        char arr[100000];
        int count = 0;
        scanf("%s", arr);
        if (arr[0] == '0') break;
        int len = strlen(arr);
        for (int i = 0, j = len - 1; i < len / 2; i++, j--) {
            if (arr[i] == arr[j]) count++;
        }
        if (count == len / 2) printf("yes\n");
        else printf("no\n");
    }
}