#include <stdio.h>

int main() {

	int h, m, k;
	scanf("%d %d", &h, &m);
	if (h >= 0 && m >= 45) printf("%d %d", h, m - 45);
	else if (h > 0 && m < 45) printf("%d %d", h - 1, 60 - (45 - m));
	else if (h == 0 && m < 45) printf("%d %d", h + 23, 60 - (45 - m));
	return 0;

}

