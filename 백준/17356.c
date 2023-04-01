#include <stdio.h>
#include <math.h>

int main() {

	double a, b, m;
	scanf("%lf %lf", &a, &b);
	m = (b - a) / 400;
	printf("%lf", 1 / (1 + pow(10, m)));
}