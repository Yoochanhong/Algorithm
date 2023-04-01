#include <stdio.h>

int main() {

	int a, b, c, d, cnt = 0, sum;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	sum = a + b + c + d;
	while (sum >= 60) {
		sum -= 60;
		cnt++;
	}
	printf("%d %d", cnt, sum);
	return 0;
}