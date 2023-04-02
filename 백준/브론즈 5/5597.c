#include <stdio.h>

int main() {

	int rhkwp[31] = { 1, 0, };
	int n = 0;
	for (int i = 0; i < 28; i++) {
		scanf("%d", &n);
		rhkwp[n] = 1;
	}
	for (int j = 0; j < 31; j++) {
		if (rhkwp[j] == 0) {
			printf("%d\n", j);
		}
	}
	return 0;
}