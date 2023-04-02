#include <stdio.h>

int main() {

	int age, weight;
	char name[11];
	while (1) {
		scanf("%s %d %d", name, &age, &weight);
		if (age == 0 && weight == 0) return 0;
		if (age > 17 || weight >= 80) printf("%s Senior\n", name);
		else printf("%s Junior\n", name);
	}
	return 0;
}