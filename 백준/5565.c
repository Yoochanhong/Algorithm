#include <stdio.h>

int main() {

	int arr[9], sum;
	scanf("%d", &sum);
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		sum -= arr[i];
	}
	printf("%d", sum);
	return 0;
}