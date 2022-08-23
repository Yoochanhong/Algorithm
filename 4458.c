#include <stdio.h>
#include <stdlib.h>


int main() {

	int n;
	char arr[31];
	scanf("%d ", &n);
	for (int i = 0; i < n; i++) {
		gets(arr);
		if (arr[0] > 96) {
			arr[0] -= 32;
		}
		printf("%s\n", arr);
	}
	return 0;
}