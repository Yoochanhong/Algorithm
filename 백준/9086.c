#include<stdio.h>

int main() {

	int t, j = 0;
	char n[1001];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%s", n);
		for (int j = 0; ; j++) {
			if (n[j] == NULL) {
				printf("%c%c\n", n[0], n[j - 1]);
				break;
			}
		}

	}
	return 0;
}