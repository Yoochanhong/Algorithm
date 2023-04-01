#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	if (n == 1) printf("2");
	else if (n == 2) printf("4");
	else if (n == 3) printf("8");
	else if (n == 4) printf("16");
	else if (n == 5) printf("32");
}