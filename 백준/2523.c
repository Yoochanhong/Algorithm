#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= n - 1; i++) {
		for (int j = n; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}