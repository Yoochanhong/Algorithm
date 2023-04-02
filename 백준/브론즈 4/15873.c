#include <stdio.h>

int main() {

	int n, a, b;
	scanf("%d", &n);
	if (n == 1010) printf("20");
	else if (n % 10 == 0) {
		a = n / 100;
		b = 10;
		printf("%d", a + b);
	}
	else {
		a = n / 10;
		b = n % 10;
		printf("%d", a + b);
	}
	return 0;
}