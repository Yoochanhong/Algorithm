#include <stdio.h>
#include <string.h>

int main() {

	char arr[501];
	while (1) {
		gets(arr);
		if (arr[0] == 'E' && arr[1] == 'N' && arr[2] == 'D') {
			return 0;
		}
		for (int i = strlen(arr) - 1; i >= 0; i--) {
			printf("%c", arr[i]);
		}
		printf("\n");
	}
	return 0;
}