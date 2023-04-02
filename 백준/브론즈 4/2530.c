#include <stdio.h>

int main() {

	int a, b, c, t;
	int bc = 0, cc = 0;
	scanf("%d %d %d %d", &a, &b, &c, &t);
	c += t;
	if (c >= 60) {
		cc = c / 60;
		c %= 60;
	}
	b += cc;
	if (b >= 60) {
		bc = b / 60;
		b %= 60;
	}
	a += bc;
	while (a >= 24) {
		a -= 24;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}