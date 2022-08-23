#include <stdio.h>

int main() {

	int n, arr[500000], s = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (i == n - 1) {
			s += arr[i];
		}
		else {
			s += arr[i] - 1;
		}
	}
	printf("%d", s);
	return 0;
}