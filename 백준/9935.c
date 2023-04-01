#include <stdio.h>
#include <string.h>

int main() {
    char arr[1000001], in[37], stack[1000001];
    int top = -1;
    scanf("%s %s", arr, in);
    int len = strlen(arr), inLen = strlen(in) - 1;
    for (int i = 0; i < len; i++) {
        stack[++top] = arr[i];
        if (arr[i] == in[inLen]) {
            if (top - inLen < 0) continue;
            int a = 1;
            for (int j = 0; j <= inLen; j++) {
                if (stack[top - j] != in[inLen - j]) {
                    a = 0;
                    break;
                }
            }
            if (a != 0) {
                top -= inLen + 1;
            }
        }
    }
    if (top == -1) printf("FRULA");
    else {
        for (int i = 0; i <= top; i++) {
            printf("%c", stack[i]);
        }
    }
    return 0;
}
