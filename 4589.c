#include <stdio.h>

int main() {

	int n, arr[3];
	scanf("%d", &n);
	printf("Gnomes:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[j]);
		}
		if (arr[0] < arr[1] && arr[1] < arr[2]) printf("Ordered\n");
		else if (arr[0] > arr[1] && arr[1] > arr[2]) printf("Ordered\n");
		else printf("Unordered\n");
	}
	return 0;
}