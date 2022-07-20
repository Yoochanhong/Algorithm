#include<stdio.h>

int main() {

	char ah[1000] = { 0 };
	char aah[1000] = { 0 };
	int i, j;
	scanf("%s %s", ah, aah);
	for (i = 0; 1; i++) {
		if (ah[i] == 'h') {
			break;
		}
	}
	i--;
	for (j = 0; 1; j++) {
		if (aah[j] == 'h') {
			break;
		}
	}
	j--;
	if (i >= j) printf("go");
	else printf("no");


	return 0;
}
