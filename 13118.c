#include <stdio.h>

int main() {

	int p[4];
	int x, y, r;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &p[i]);
	}
	scanf("%d %d %d", &x, &y, &r);

	for (int i = 0; i < 4; i++) {
		if (x == p[i]) {
			printf("%d", i + 1);
			return 0;
		}
	}
	printf("0");
}