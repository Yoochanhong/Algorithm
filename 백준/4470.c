#include <stdio.h>

int main() {

	int n;
	char arr[51];
	scanf("%d ", &n);
	for (int i = 1; i <= n; i++) {
		gets(arr);
		printf("%d. %s\n", i, arr);
	}
	return 0;
}