#include <stdio.h>
#include <string.h>

int main() {

	char arr[5];
	while (1) {
		int sum = 1;
		scanf("%s", arr);
		if (arr[0] == '0') {
			return 0;
		}
		for (int i = 0; i < strlen(arr); i++) {
			if (arr[i] == '1') sum += 2;
			else if (arr[i] == '0') sum += 4;
			else sum += 3;
			sum++;
		}
		printf("%d\n", sum);
	}
	return 0;
}