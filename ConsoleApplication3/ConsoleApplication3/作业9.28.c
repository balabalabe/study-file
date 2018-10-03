#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 1; i < 7; i++)
	{
		for (j = 1; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (k = 7; k > 0; k--)
	{
		for (j = 1; j < k + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}