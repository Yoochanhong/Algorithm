#include <stdio.h>

int main() {

	int arr[3], temp;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("%d", arr[1]);
	return 0;
}