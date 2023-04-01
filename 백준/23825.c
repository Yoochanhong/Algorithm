#include <stdio.h>

int main() {

	int n, m, min;
	scanf("%d %d", &n, &m);

	if (n > m) min = m;
	else min = n;
	printf("%d", min / 2);
	return 0;
}