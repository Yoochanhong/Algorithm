#include <stdio.h>

int main() {

	int n;
	double a;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &a);
		printf("$%.2lf\n", a - a / 5);
	}
	return 0;
}