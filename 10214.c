#include <stdio.h>

int main() {

	int t, y, k, ys = 0, ks = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		for (int i = 0; i < 9; i++) {
			scanf("%d %d", &y, &k);
			ys += y;
			ks += k;
		}
		if (ys > ks) printf("Yonsei\n");
		else if (ys < ks) printf("Korea\n");
		else printf("Draw\n");
	}
	return 0;
}