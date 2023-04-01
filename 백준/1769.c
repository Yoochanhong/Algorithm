#include <stdio.h>
#include <string.h>

int main() {
    char arr[1000001];
    int sum = 0, j = 1;
    scanf("%s", arr);
    int len = strlen(arr);
    for (int i = 0; i < len; i++) {
        sum += arr[i] - '0';
    }
    int answer = 0;
    while (sum > 9) {
        answer = 0;
        while (sum > 0) {
            answer += sum % 10;
            sum /= 10;
        }
        j++;
        sum = answer;
    }
    if (len == 1) printf("0\n%s", sum % 3 == 0 ? "YES" : "NO");
    else printf("%d\n%s", j, answer % 3 == 0 ? "YES" : "NO");
    return 0;
}