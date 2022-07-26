#include <stdio.h>

int main() {

	int date, car[5], cnt = 0;
	scanf("%d", &date);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &car[i]);
		if (car[i] == date) cnt++;
	}
	printf("%d", cnt);

	return 0;
}