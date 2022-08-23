#include <stdio.h>

int main() {

	int n, a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int sum = 0;
		scanf("%d", &a);
		for (int j = 0; j < a; j++) {
			scanf("%d", &b);
			sum += b;
		}
		printf("%d\n", sum);
	}
	return 0;
}