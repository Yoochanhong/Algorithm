#include <stdio.h>

int main() {

	int a, b, c, sum;
	int arr[10] = { 0 };
	scanf("%d %d %d", &a, &b, &c);
	sum = a * b * c;
	while (sum > 0) {
		arr[sum % 10]++;
		sum /= 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}