#include <stdio.h>
#include <math.h>

int main() {

	int arr[3], temp;
	while (1) {
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
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
			break;
		}
		if (pow(arr[0], 2) + pow(arr[1], 2) == pow(arr[2], 2)) {
			printf("right\n");
		}
		else printf("wrong\n");

	}
	return 0;
}