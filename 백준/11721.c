#include <stdio.h>
#include <string.h>

int main() {

	char arr[101];
	scanf("%s", arr);

	for (int i = 0; i <= strlen(arr); i++) {
		if (arr[i] == NULL) break;
		printf("%c", arr[i]);
		if ((i + 1) % 10 == 0) printf("\n");
	}
	return 0;
}