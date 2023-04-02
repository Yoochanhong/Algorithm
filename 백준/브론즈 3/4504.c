#include <stdio.h>

int main() {

	int n, s;
	scanf("%d", &n);
	while (1) {
		scanf("%d", &s);
		if (s == 0) break;
		if (s % n == 0) {
			printf("%d is a multiple of %d.\n", s, n);
		}
		else {
			printf("%d is NOT a multiple of %d.\n", s, n);
		}
	}
	return 0;
}