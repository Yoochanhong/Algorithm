#include <stdio.h>

int main() {

	int n, pt = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		pt *= i;
	}
	printf("%d", pt);
	return 0;
}