#include <stdio.h>

int main() {

	int m, n, c = 0, min = 10001;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++) {
		int j = 0;
		for (j = 2; j < i; j++) {
			if (i % j == 0) break;
		}
		if (i == j) {
			c += i;
			if (min > c) min = c;
		}
	}
	if (c == 0) printf("-1");
	else printf("%d\n%d", c, min);
	return 0;
}