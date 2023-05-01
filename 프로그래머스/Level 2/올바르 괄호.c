#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    int len = strlen(s), top = -1;
    int stack[len + 1];
    for (int i = 0; i < len; i++){
        if (s[i] == '('){
            top++;
        } else {
            top--;
            if (top < -1) return false;
        }
    }
    if (top != -1) return false;
    else return true;
}
