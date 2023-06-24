#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(char* myString, char* pat) {
    int len = strlen(myString);
    for (int i = 0; i < len; i++){
        if (myString[i] == 'A') myString[i] = 'B';
        else myString[i] = 'A';
    }
    char *a = strstr(myString, pat);
    if (a != NULL) return 1;
    else return 0;
}
