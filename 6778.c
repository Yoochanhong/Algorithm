#include <stdio.h>

int main() {

	int an = 0, eye = 0;
	scanf("%d %d", &an, &eye);
	if (an >= 3 && eye <= 4) printf("TroyMartian\n");
	if (an <= 6 && eye >= 2) printf("VladSaturnian\n");
	if (an <= 2 && eye <= 3) printf("GraemeMercurian\n");
	return 0;
}