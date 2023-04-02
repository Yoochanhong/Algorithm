#include <stdio.h>

int main() {

	int a, b, sum;
	int arr[5];
	scanf("%d %d", &a, &b);
	sum = a * b;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i] - sum);
	}
	return 0;
}