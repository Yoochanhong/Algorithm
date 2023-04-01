#include <stdio.h>

int main() {

	int t, s, n, q, p;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int sum = 0;
		scanf("%d %d", &s, &n);
		sum += s;
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &q, &p);
			sum += q * p;
		}
		printf("%d\n", sum);
	}
	return 0;
}