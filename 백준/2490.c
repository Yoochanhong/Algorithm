#include <stdio.h>

int main() {

	int arr[4];
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		switch (sum) {
		case 4:
			printf("E\n");
			break;
		case 3:
			printf("A\n");
			break;
		case 2:
			printf("B\n");
			break;
		case 1:
			printf("C\n");
			break;
		case 0:
			printf("D\n");
		}
	}
	return 0;
}