#include <stdio.h>

int main() {

	int n, ch = 100, sd = 100, a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if (a > b) {
			sd -= a;
		}
		else if (a < b) {
			ch -= b;
		}
	}
	printf("%d\n%d", ch, sd);
	return 0;
}