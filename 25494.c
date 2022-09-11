#include <stdio.h>

int main() {

	int arr[3], n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int min = 61;
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[j]);
			if (arr[j] < min) min = arr[j];
		}
		printf("%d\n", min);
	}
	return 0;
}