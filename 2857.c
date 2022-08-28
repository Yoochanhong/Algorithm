#include <stdio.h>
#include <string.h>

int main() {

	int n[5] = { 0 }, s = 0;
	char arr[11];
	for (int k = 0; k < 5; k++) {
		scanf("%s", arr);
		for (int i = 0; i < strlen(arr) - 1; i++) {
			if (arr[i] == 'F') {
				if (arr[i + 1] == 'B') {
					if (arr[i + 2] == 'I') {
						n[k] = k + 1;
						s++;
					}
					else continue;
				}
				else continue;
			}
			else continue;
		}
	}
	if (s == 0) {
		printf("HE GOT AWAY!");
	}
	else {
		for (int i = 0; i < 5; i++) {
			if (n[i] != 0) {
				printf("%d ", n[i]);
			}
		}
	}
	return 0;
}