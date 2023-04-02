#include <stdio.h>

int main() {

	long long int a, b, c, d, e;
	scanf("%lld %lld %lld", &a, &b, &c);

	d = a * (double)b / c;
	e = ((double)a / b) * c;

	if (d > e) printf("%lld", d);
	else printf("%lld", e);
	return 0;
}