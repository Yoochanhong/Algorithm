#include <stdio.h>

int main() {

	int k, n, m, sum;
	scanf("%d %d %d", &k, &n, &m);
	sum = k * n;
	if (sum - m > 0) printf("%d", sum - m);
	else printf("0");
	return 0;
}