#include <stdio.h>

int main() {

	int n, t, c, p;
	scanf("%d %d %d %d", &n, &t, &c, &p);
	printf("%d", (n - 1) / t * c * p);
	return 0;
}