#include <stdio.h>

int main() {

	int n, sum = 0;
	char k[101];
	scanf("%d", &n);
	scanf("%s", k);
	for (int i = 0; i < n; i++) {
		sum += k[i] - '0';
	}
	printf("%d", sum);
	return 0;
}