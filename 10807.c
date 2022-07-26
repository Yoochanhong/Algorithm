#include <stdio.h>

int main() {

	int n, k, v = 0;
	int arr[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d ", &arr[i]);
	}
	scanf("%d", &k);
	for (int i = 0; i < n; i++) {
		if (arr[i] == k) {
			v++;
		}
	}
	printf("%d", v);
	return 0;
}