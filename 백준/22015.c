#include <stdio.h>

int main() {

	int arr[3], big = 0, sum = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
		if (big < arr[i]) big = arr[i];
		sum += arr[i];
	}
	printf("%d", big * 3 - sum);
	return 0;
}