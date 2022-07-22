#include <stdio.h>

int main() {

	int a, b, c, d, e, f, sum;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	a *= 5;
	b *= 5;
	c *= 5;
	d *= 5;
	e *= 5;
	f *= 5;
	sum = a + b + c + d + e + f;
	printf("%d", sum);
	return 0;
}