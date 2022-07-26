#include <stdio.h>

int main() {

	long long int a, b, sum;
	scanf("%lld %lld", &a, &b);
	sum = a - b;
	if (sum < 0) sum *= -1;
	printf("%lld", sum);
	return 0;
}