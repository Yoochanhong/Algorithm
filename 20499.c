#include <stdio.h>

int main() {

	int a, b, c;
	char d, e;
	scanf("%d%c%d%c%d", &a, &d, &b, &e, &c);
	if (a + c < b || b == 0) {
		printf("hasu");
	}
	else printf("gosu");
	return 0;
}