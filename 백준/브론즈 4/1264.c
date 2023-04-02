#include <stdio.h>
#include <string.h>

int main() {

	char arr[256];
	while (1) {
		gets(arr);
		int j = 0;
		if (arr[0] == '#') return 0;
		for (int i = 0; i < strlen(arr) - 1; i++) {
			if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U') {
				j++;
			}
		}
		printf("%d\n", j);
	}
	return 0;
}