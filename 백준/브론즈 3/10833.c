#include <stdio.h>

int main() {

	int n, arr[200], a = 0;
	scanf("%d", &n);
	for (int i = 0; i < n * 2; i++) {
		scanf("%d", &arr[i]);
		if (i % 2 != 0) {
			a += arr[i] % arr[i - 1];
		}
	}
	printf("%d", a);

	return 0;
}