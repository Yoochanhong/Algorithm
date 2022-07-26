#include<stdio.h>

int main() {

	int n, m, k, a, b;
	scanf("%d %d %d", &n, &m, &k);
	a = k / m;
	b = k % m;
	printf("%d %d", a, b);

}