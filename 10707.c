#include <stdio.h>

int main() {

	int a, b, c, d, p, x, y;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &p);
	x = a * p;
	if (c >= p) {
		printf("%d", x < b ? x : b);
		return 0;
	}
	else {
		y = d * (p - c) + b;
		if (x <= y) printf("%d", x);
		else printf("%d", y);
	}

	return 0;
}