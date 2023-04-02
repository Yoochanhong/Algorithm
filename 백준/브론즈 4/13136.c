#include <stdio.h>

int main() {

	long long int r, c, n;
	scanf("%lld %lld %lld", &r, &c, &n);
	if (r % n > 0) r = (r / n) + 1;
	else r = (r / n);

	if (c % n > 0) c = (c / n) + 1;
	else c = (c / n);
	printf("%lld", r * c);
	return 0;
}