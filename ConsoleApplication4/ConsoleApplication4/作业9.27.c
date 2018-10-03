#include<stdio.h>
int main()
{
	int i, flower = 0, j, k, l;
	for (i = 100; i < 999; i++)
	{
		j = i / 10 % 10;//分离十位
		k = i % 10;//分离个位
		l = i / 100;//分离百位
		if (i == j*j*j + k*k*k + l*l*l)
		{
			printf("%d是水仙花数\n", i);
		}
	}
	return 0;
}