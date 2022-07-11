#include <stdio.h>

int main() {

	int n, n1;
	int cnt = 0;

	scanf("%d", &n);
	n1 = n;

	while (1) {
		n = (((n % 10) + ((n / 10) % 10)) % 10) + ((n % 10) * 10);
		cnt++;

		if (n == n1) {
			printf("%d", cnt);
			break;
		}
	}
	return  0;
}