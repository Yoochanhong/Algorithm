#include <stdio.h>

int main() {

	int arr[7], temp, sum = 0, min = 101;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 7; i++) {
		if (arr[i] % 2 != 0) {
			sum += arr[i];
			if (min > arr[i]) min = arr[i];
		}
	}
	if (sum == 0) {
		printf("-1");
	}
	else {
		printf("%d\n%d", sum, min);
	}
	return 0;
}