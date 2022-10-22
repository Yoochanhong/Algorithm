#include <stdio.h>

int main(){

    int h, m, s, h1, m1, s1;
    scanf("%d:%d:%d", &h, &m, &s);
    scanf("%d:%d:%d", &h1, &m1, &s1);
    s += h * 3600 + m * 60;
    s1 += h1 * 3600 + m1 * 60;
    int sum = s-s1;
    if (s < s1) printf("%.2d:%.2d:%.2d", (s1-s)/3600, (s1-s)/60%60, (s1-s)%60);
    else {
        printf("%.2d:%.2d:%.2d", (86400-sum)/3600, (86400-sum)/60%60, (86400-sum)%60);
    }
    return 0;
}