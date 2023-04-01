#include <stdio.h>

int main() {

	char a[101] = { 0 };
	char b[101] = {};
	int i;
	scanf("%s", &a);
	for (i = 0; 1; i++) {
		if (a[i] == 0) break;
	}
	for (int j = 0; j < i; j++) {
		if ('z' >= a[j] && a[j] >= 'a') {
			b[j] = a[j] - 32;
		}
		else if ('A' <= a[j] && a[j] <= 'Z') {
			b[j] = a[j] + 32;
		}
	}
	printf("%s", b);
	return 0;
}