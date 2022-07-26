#include <stdio.h>

int main() {

	int a, b;
	do {
		scanf("%d %d", &a, &b);
		if (a > b) {
			printf("Yes\n");
		}
		else if (a == 0 && b == 0) {
			break;
		}
		else {
			printf("No\n");
		}
	} while (a != 0 || b != 0);


	return 0;
}