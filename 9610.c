#include <stdio.h>

int main() {

	long long int x, y;
	int n, a = 0, b = 0, c = 0, d = 0, axis = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld %lld", &x, &y);
		if (x == 0 || y == 0) {
			axis++;
		}
		else if (x > 0) {
			if (y > 0) a++;
			else d++;
		}
		else if (x < 0) {
			if (y > 0) b++;
			else c++;
		}
	}
	printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d", a, b, c, d, axis);
	return 0;
}