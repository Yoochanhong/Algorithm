#include <stdio.h>

int main() {

	int arr[100], n, sum = 0, k = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i <= n; i++) {
		if (arr[i - 1] == 1) {
			k++;
		}
		else k = 0;
		sum += k;
	}
	printf("%d", sum);
	return 0;
}