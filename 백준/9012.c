#include <stdio.h>
#include <string.h>

int main() {

    int n;
    char arr[51];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", arr);
        int len = strlen(arr), cnt = 0;
        for (int j = 0; j < len; j++) {
            if (arr[j] == '(') cnt++;
            else cnt--;
            if (cnt < 0) break;
        }
        if (cnt != 0) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}