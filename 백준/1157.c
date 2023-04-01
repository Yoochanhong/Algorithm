#include <stdio.h>
#include <string.h>


int main() {
    char arr[1000001];
    int arr1[26], max = 0, maxC = 0, maxA = 0;
    scanf("%s", arr);
    int len = strlen(arr);
    for (int i = 0; i < len; i++) {
        if (arr[i] > 96) arr[i] -= 32;
    }
    for (char a = 65; a < 91; a++) {
        int c = 0;
        for (int i = 0; i < len; i++) {
            if (arr[i] == a) c++;
        }
        arr1[a - 65] = c;
    }
    for (int i = 65; i < 91; i++) {
        if (maxA < arr1[i - 65]) {
            max = i;
            maxA = arr1[i - 65];
        }
    }
    for (int i = 65; i < 91; i++) {
        if (maxA == arr1[i - 65]) maxC++;
    }
    if (maxC > 1) printf("?");
    else printf("%c", max);
    return 0;
}