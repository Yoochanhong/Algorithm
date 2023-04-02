#include <stdio.h>
#include <string.h>

int main() {

	char s[101];
	scanf("%s", s);
	for (int i = 97; i <= 122; i++) {
		int a = 0;
		for (int j = 0; j < strlen(s); j++) {
			if (s[j] == i) a++;
		}
		printf("%d ", a);
	}
	return 0;
}