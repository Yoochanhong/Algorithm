#include <stdio.h>

int main() {

	int arr[8], big = 0, sum = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 7; i++) {
		if (i % 2 != 0) {
			sum += arr[i];
		}
		else {
			sum -= arr[i];
		}
		if (i % 2 != 0) {
			if (big < sum) big = sum;
		}
	}
	printf("%d", big);
	return 0;
}