#include <stdio.h>

int main() {

	int a[4], b[2], a_min = 100;
	scanf("%d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &b[0], &b[1]);
	for (int i = 0; i < 4; i++) {
		if (a_min >= a[i]) a_min = a[i];
	}
	for (int i = 0; i < 4; i++) {
		if (a_min == a[i]) {
			a[i] = 0;
			break;
		}
	}
	if (b[0] >= b[1]) b[1] = 0;
	else b[0] = 0;
	printf("%d", a[0] + a[1] + a[2] + a[3] + b[0] + b[1]);


	return 0;
}