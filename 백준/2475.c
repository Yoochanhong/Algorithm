#include <stdio.h>

int main() {

	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	a *= a;
	b *= b;
	c *= c;
	d *= d;
	e *= e;
	printf("%d", (a + b + c + d + e) % 10);
	return 0;
}