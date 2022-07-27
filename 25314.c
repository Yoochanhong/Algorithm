#include <stdio.h>

int main() {

	int n, i;
	scanf("%d", &n);
	i = n / 4;
	for (int j = 0; j < i; j++) {
		printf("long ");
	}
	printf("int");
	return 0;
}