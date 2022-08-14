#include <stdio.h>

int main() {

	double a, b, re;
	scanf("%lf %lf", &a, &b);
	re = a - (a * b / 100);
	if (re >= 100) printf("0");
	else printf("1");
	return 0;
}