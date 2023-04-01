#include <stdio.h>

int main() {

	int m, f;
	while (1) {
		scanf("%d %d", &m, &f);
		if (m == 0 && f == 0) {
			break;
		}
		else printf("%d\n", m + f);
	}
	return 0;
}