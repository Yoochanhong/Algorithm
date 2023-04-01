#include <stdio.h>
#include <math.h>

int main() {

	int n;
	scanf("%d", &n);
	printf("%d", (-1 + (int)sqrt(3 + 4 * n)) / 2);
	return 0;
}