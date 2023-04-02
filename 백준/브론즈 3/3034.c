#include <stdio.h>
#include <math.h>

int main() {

	int n, w, h, arr[1000];
	double x;
	scanf("%d %d %d", &n, &w, &h);
	x = pow(w, 2) + pow(h, 2);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (sqrt(x) < arr[i]) printf("NE\n");
		else printf("DA\n");
	}
	return 0;
}