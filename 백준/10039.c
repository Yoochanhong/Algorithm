#include <stdio.h>

int main() {

	int a = 0, arr[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < 40) arr[i] = 40;
		a += arr[i];
	}
	a /= 5;
	printf("%d", a);
	return 0;
}