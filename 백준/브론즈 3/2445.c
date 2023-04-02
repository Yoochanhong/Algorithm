#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		for (int k = n; k > i + 1; k--) {
			printf(" ");
		}
		for (int l = n; l > i + 1; l--) {
			printf(" ");
		}
		for (int m = 0; m <= i; m++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			printf("*");
		}
		for (int k = 0; k <= i; k++) {
			printf(" ");
		}
		for (int l = 0; l <= i; l++) {
			printf(" ");
		}
		for (int m = n - 1; m > i; m--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}