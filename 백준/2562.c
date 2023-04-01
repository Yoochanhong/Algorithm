#include <stdio.h>

int main() {

	int arr[9], max = 0, k;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		if (max < arr[i]) max = arr[i];
	}
	for (int i = 0; i < 9; i++) {
		if (max == arr[i]) k = i + 1;
	}
	printf("%d\n%d", max, k);
	return 0;
}