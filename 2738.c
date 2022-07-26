#include <stdio.h>

int main()
{
	int arr[100][100] = { 0 };
	int a, n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				scanf("%d", &a);
				arr[j][k] += a;

			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}