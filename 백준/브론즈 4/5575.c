#include <stdio.h>

int main() {

	int a[6], h, m, s;
	for (int t = 0; t < 3; t++) {
		for (int i = 0; i < 6; i++) {
			scanf("%d", &a[i]);
		}
		h = a[3] - a[0];
		m = a[4] - a[1];
		if (m < 0) {
			h -= 1;
			m += 60;
		}
		s = a[5] - a[2];
		if (s < 0) {
			m -= 1;
			s += 60;
			if (m < 0) {
				h -= 1;
				m += 60;
			}
		}
		printf("%d %d %d\n", h, m, s);
	}
	return 0;
}