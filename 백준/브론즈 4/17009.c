#include <stdio.h>

int main() {

	int a1, a2, a3, b1, b2, b3;
	scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &b1, &b2, &b3);
	if (a1 * 3 + a2 * 2 + a3 > b1 * 3 + b2 * 2 + b3) printf("A");
	else if (a1 * 3 + a2 * 2 + a3 < b1 * 3 + b2 * 2 + b3) printf("B");
	else printf("T");
	return 0;
}