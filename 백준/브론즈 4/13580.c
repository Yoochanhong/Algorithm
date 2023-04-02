#include <stdio.h>


int main() {

	int arr[3], temp;
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] + arr[1] == arr[2]) {
		printf("S");
	}
	else printf("N");
	return 0;
}