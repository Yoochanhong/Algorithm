#include <stdio.h>

int main() {

	int p, q, s = 0;
	scanf("%d %d", &p, &q);
	for (int i = 1; i <= p; i++) {
		if (p % i == 0) {
			s++;
			if (s == q) {
				printf("%d", i);
				return 0;
			}
		}
	}
	printf("0");
	return 0;
}