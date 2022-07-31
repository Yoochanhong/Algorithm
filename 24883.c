#include <stdio.h>

int main() {

	char x;
	scanf("%c", &x);
	if (x == 'n' || x == 'N') {
		printf("Naver D2");
	}
	else printf("Naver Whale");
	return 0;
}