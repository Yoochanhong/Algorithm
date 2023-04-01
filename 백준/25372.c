#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a = 0;
		char arr[1001];
		scanf("%s", arr);
		for (int j = 0; arr[j] != NULL; j++)
			a++;

		if (6 <= a && a <= 9) printf("yes\n");
		else printf("no\n");
	}

}