#include <stdio.h>

int main() {

	int arr[10], temp = 0, a = 0;
	int ch[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++) {

		ch[i] = arr[i] % 42;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10 - 1 - i; j++) {
			if (ch[j + 1] < ch[j]) {
				temp = ch[j];
				ch[j] = ch[j + 1];
				ch[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		if (ch[i] != ch[i + 1])
		{
			a++;
		}
	}
	printf("%d", a);
	return 0;
}