#include <stdio.h>

int main() {
	int t, arr[100];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int sum = 0, min = 101;
		for (int j = 0; j < 7; j++) {
			scanf("%d", &arr[j]);
			if (arr[j] % 2 == 0) {
				sum += arr[j];
				if (min > arr[j]) {
					min = arr[j];
				}
			}
		}
		printf("%d %d\n", sum, min);
	}
	return 0;
}