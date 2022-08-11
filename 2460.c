#include <stdio.h>

int main() {

	int arr[20], big = 0, sum = 0;
	for (int i = 0; i < 20; i++) {
		scanf("%d", &arr[i]);
		if (i % 2 != 0) {
			sum += arr[i];
			if (big < sum) {
				big = sum;
			}
		}
		else sum -= arr[i];
	}
	printf("%d", big);
	return 0;
}