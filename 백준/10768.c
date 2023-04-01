#include <stdio.h>

int main() {

	int month, date;
	scanf("%d %d", &month, &date);
	if (month >= 3) printf("After");
	else if (month == 2) {
		if (date > 18) printf("After");
		else if (date == 18) printf("Special");
		else printf("Before");
	}
	else printf("Before");
	return 0;
}