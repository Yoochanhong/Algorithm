#include <stdio.h>

int main() {

	long long int n, a[1000000], min = 1000000, max = -1000000;
	scanf("%lld", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);

	}
	for (int i = 0; i < n; i++)
	{
		if (min > a[i]) {
			min = a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (max < a[i]) {
			max = a[i];
		}
	}


	printf("%lld %lld", min, max);
	return  0;
}