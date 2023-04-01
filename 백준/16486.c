#include <stdio.h>

int main() {

	double d1, d2;
	scanf("%lf %lf", &d1, &d2);
	d2 *= 3.141592 * 2;
	printf("%f", d2 + 2 * d1);
	return 0;
}