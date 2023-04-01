#include <stdio.h>

int main() {

	int a;
	scanf("%d", &a);
	if (100 >= a && a >= 90) printf("A");
	else if (90 > a && a >= 80) printf("B");
	else if (80 > a && a >= 70) printf("C");
	else if (70 > a && a >= 60) printf("D");
	else printf("F");
	return 0;
}