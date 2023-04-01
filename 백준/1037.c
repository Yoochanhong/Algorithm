#include <stdio.h>

int main() {

	int n, arr[50];
	long long int min = 10000001, max = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}
	printf("%lld", min * max);
	return 0;
}