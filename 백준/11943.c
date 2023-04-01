#include <stdio.h>

int main() {

	int a, b, c, d, i, j;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	i = a + d;
	j = b + c;
	if (i >= j) printf("%d", j);
	else printf("%d", i);
	return 0;
}