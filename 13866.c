#include <stdio.h>

int main() {

	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (b + c > a + d) {
		printf("%d", (b + c) - (a + d));
	}
	else printf("%d", (a + d) - (b + c));
	return 0;
}