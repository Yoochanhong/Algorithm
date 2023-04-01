#include <stdio.h>

int lcd(int a, int b){
    if (b == 0){
        return a;
    }
    else {
        return lcd(b, a%b);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    for (int l = 0; l<n; l++) {
        int a, b;
        scanf("%d %d", &a, &b);
        int d = lcd(a, b);
        int e = d * (a/d*b/d);
        printf("%d\n", e);
    }
    return 0;
}