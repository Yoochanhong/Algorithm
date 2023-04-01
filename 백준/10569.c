#include <stdio.h>

int main() {
	int t, v, e;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &v, &e);
		printf("%d\n", (v - e - 2) * (-1));
	}

	return 0;
}