#include <stdio.h>

int main() {
    int n, max = 11, min = 0;
    char arr[10];
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        for (int i = 0; i < 2; i++) scanf("%s", arr);
        if (arr[0] == 'h' && max > n) max = n;
        else if (arr[0] == 'l' && min < n) min = n;
        else if (arr[0] == 'o') {
            if (n >= max || n <= min) printf("Stan is dishonest\n");
            else printf("Stan may be honest\n");
            max = 11, min = 0;
        }
    }
    return 0;
}