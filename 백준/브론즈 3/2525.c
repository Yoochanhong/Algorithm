#include <stdio.h>

int main() {

	int h, m, t, a;
	scanf("%d %d %d", &h, &m, &t);
	if (m + t < 60) printf("%d %d", h, m + t);
	else if (m + t >= 60) {
		a = m + t;
		while (a >= 60)
		{
			a = a - 60;
			h++;
		}
		if (h >= 24) h -= 24;
		printf("%d %d", h, a);
	}
	return 0;

}
