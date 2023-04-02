#include <stdio.h>

int main() {

	int n, arr[101], sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 1) {
			sum += 1;
		}
		else {
			sum -= 1;
		}
	}
	if (sum > 0) {
		printf("Junhee is cute!");
	}
	else printf("Junhee is not cute!");
	return 0;
}