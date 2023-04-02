#include <stdio.h>
#include <math.h>

int main() {

	int r;
	scanf("%d", &r);
	printf("%.6lf\n%.6lf", pow((double)r, 2) * 3.1415926535897932, pow((double)r, 2) * 2);

	return 0;
}