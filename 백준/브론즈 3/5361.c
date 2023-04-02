#include <stdio.h>

int main(){

    double a, b, c, d, e;
    int n;
    scanf("%d", &n);
    for (int i = 0; i<n; i++) {
        scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
        a *= 350.34;
        b *= 230.90;
        c *= 190.55;
        d *= 125.30;
        e *= 180.90;
        printf("$%.2lf\n", a+b+c+d+e);
    }
    return 0;
}