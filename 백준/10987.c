#include <stdio.h>
#include <string.h>

int main() {

	int aeiou = 0;
	char arr[101];
	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
			aeiou++;
		}
	}
	printf("%d", aeiou);

	return 0;
}