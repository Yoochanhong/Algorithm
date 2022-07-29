#include <stdio.h>

int main() {

	int n, m;
	scanf("%d %d", &n, &m);
	if (n > m && m <= 2) printf("NEWBIE!");
	else if (n >= m && m > 2) printf("OLDBIE!");
	else if (n < m && m>2) printf("TLE!");
	return 0;
}