#include <stdio.h>

int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	b /= 2;
	b += c;
	if (a < b) {
		printf("%d", a);
	}
	else printf("%d", b);
	return 0;
}