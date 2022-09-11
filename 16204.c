#include <stdio.h>

int main() {

	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	printf("%d", (m > k ? k : m) + ((n - m) > (n - k) ? (n - k) : (n - m)));
	return 0;
}