#include <stdio.h>

int main() {

	int l, a, b, c, d;
	scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
	if (a % c != 0) {
		a /= c;
		a++;
	}
	else a /= c;
	if (b % d != 0) {
		b /= d;
		b++;
	}
	else b /= d;
	if (a >= b) printf("%d", l - a);
	else printf("%d", l - b);
	return 0;
}