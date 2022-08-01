#include <stdio.h>

int main() {

	int n, w, h, l;
	scanf("%d %d %d %d", &n, &w, &h, &l);
	w /= l;
	h /= l;
	if (w * h > n) printf("%d", n);
	else printf("%d", w * h);
	return 0;
}