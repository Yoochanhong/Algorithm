#include<stdio.h>

int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a != b && b == c) printf("A");
	else if (a != b && a == c) printf("B");
	else if (a == b && a != c) printf("C");
	else if (a == b && a == c) printf("*");
	return 0;
}