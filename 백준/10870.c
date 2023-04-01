#include <stdio.h>

int fibo(int n) {
	if (n > 1)
		return fibo(n - 1) + fibo(n - 2);
	else
		return n;
}
int main() {

	int n;
	scanf("%d", &n);
	printf("%d\n", fibo(n));
	return 0;
}