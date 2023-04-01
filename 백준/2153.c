#include <stdio.h>
#include <string.h>

int main() {
    char arr[21];
    int sum = 0;
    scanf("%s", arr);
    int len = strlen(arr);
    for (int i = 0; i < len; i++) {
        if (arr[i] < 91) sum += arr[i] - 38;
        else if (arr[i] > 96) sum += arr[i] - 96;
    }
    for (int i = 2; i <= sum / 2; i++) {
        if (sum % i == 0){
            printf("It is not a prime word.");
            return 0;
        }
    }
    printf("It is a prime word.");
    return 0;
}