#include <stdio.h>

int main() {

	int n, arr[100];
	double result = 0, avg = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		result = result + ((double)arr[i] / n);
		avg += arr[i];
	}
	avg /= n;
	if (n == 0) printf("divide by zero");
	else printf("%.2lf", result / avg);
	return 0;
}