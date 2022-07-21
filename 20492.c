#include <stdio.h>

int main() {

	int n;
	int a, b;
	scanf("%d", &n);
	a = n - (n / 100 * 22);
	b = n - (n / 100 * 80);
	b = b / 100 * 22;
	printf("%d %d", a, n - b);

	return 0;
}