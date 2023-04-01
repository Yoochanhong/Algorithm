#include <stdio.h>

int main() {

	int n, a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		int sum = 1;
		for (int j = 0; j < b; j++) {
			sum *= a;
			sum %= 10;
		}

		if (sum == 0) printf("10\n");
		else printf("%d\n", sum);
	}


	return 0;
}