#include <stdio.h>

int main() {

	int num[3], max, mid, min;
	char arr[4];
	for (int i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
	}
	scanf("%s", arr);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (num[j] > num[j + 1]) {
				int temp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = temp;
			}
		}
	}
	max = num[2], mid = num[1], min = num[0];

	if (arr[0] == 'A') {
		if (arr[1] == 'B') printf("%d %d %d", num[0], num[1], num[2]);
		else printf("%d %d %d", num[0], num[2], num[1]);
	}
	else if (arr[0] == 'B') {
		if (arr[1] == 'A') printf("%d %d %d", num[1], num[0], num[2]);
		else printf("%d %d %d", num[1], num[2], num[0]);
	}
	else if (arr[0] == 'C') {
		if (arr[1] == 'A') printf("%d %d %d", num[2], num[0], num[1]);
		else printf("%d %d %d", num[2], num[1], num[0]);
	}
	return 0;
}