#include <stdio.h>

int main() {

	int a = 300, b = 60, c = 10, n;
	int ac = 0, bc = 0, cc = 0;
	scanf("%d", &n);
	while (n >= 300) {
		n -= a;
		ac++;
	}
	while (n >= 60) {
		n -= b;
		bc++;
	}
	while (n >= 10) {
		n -= c;
		cc++;
	}
	if (n == 0)printf("%d %d %d", ac, bc, cc);
	else printf("-1");
	return 0;
}