#include <stdio.h>

int main() {

	int n, i, a, k = 0;
	scanf("%d", &n);
	while (n != 0) {
		scanf("%d", &a);
		n--;
		for (i = 2; i < a; i++) {
			if (a % i == 0) {
				break;
			}
		}
		if (a == i) k++;
	}
	printf("%d", k);
	return 0;
}