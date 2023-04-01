#include <stdio.h>

int main() {

	int t, n, c, sum = 0;
	double g, hsum = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d %lf", &c, &g);
			sum += c;
			hsum += c * g;
		}
		printf("%d %.1lf\n", sum, hsum / sum);
		sum = 0;
		hsum = 0;
	}
	return 0;
}