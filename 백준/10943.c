#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));
	printf("%d", (rand() % 9) + 1);
	return 0;
}