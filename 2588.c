#include <stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	int a = (y % 10);
	int b = (y / 10) % 10;
	int c = (y / 100);
	int d = y;

	printf("%d\n%d\n%d\n%d", x * a, x * b, x * c, x * d);

	return 0;
}