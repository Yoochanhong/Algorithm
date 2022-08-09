#include <stdio.h>

int main() {

	int a, b, c, d, arr[5], big = 0, s;
	for (int i = 0; i < 5; i++) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
		arr[i] = a + b + c + d;
	}
	for (int i = 0; i < 5; i++) {
		if (big < arr[i]) {
			big = arr[i];
			s = i + 1;
		}
	}
	printf("%d\n%d", s, big);
	return 0;
}