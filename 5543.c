#include <stdio.h>

int main() {

	int bug[3], dr[2], min = 2001;
	scanf("%d %d %d %d %d", &bug[0], &bug[1], &bug[2], &dr[0], &dr[1]);
	for (int i = 0; i < 3; i++) {
		if (min > bug[i]) min = bug[i];
	}
	if (dr[0] > dr[1]) min += dr[1];
	else min += dr[0];
	printf("%d", min - 50);
	return 0;
}