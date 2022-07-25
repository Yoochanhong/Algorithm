#include <stdio.h>

int main() {

	int min[4], man[4];
	int min_sum = 0, man_sum = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &min[i]);
		min_sum += min[i];
	}
	for (int i = 0; i < 4; i++) {
		scanf("%d", &man[i]);
		man_sum += man[i];
	}
	if (min_sum >= man_sum) printf("%d", min_sum);
	else printf("%d", man_sum);
	return 0;
}