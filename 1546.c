#include <stdio.h>

int main() {

	int n, m[1000] = { 0 }, max = 0;
	double nm[1000] = { 0 }, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m[i]);
	}
	for (int i = 0; i < n; i++) {
		if (max < m[i]) max = m[i];
	}
	for (int i = 0; i < n; i++) {
		nm[i] = (double)m[i] / max * 100;
	}
	for (int i = 0; i < n; i++) {
		sum += nm[i];
	}
	printf("%f", sum / n);

	return 0;
}