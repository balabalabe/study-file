#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int i, c = 0, num = 0;
	printf("please enter the number\n");
	scanf_s("%d", &c);
	int GONGSHI(int a, int d);
	for (i = 1; i <= 5; ++i)
	{
		num = num + GONGSHI(i, c);
	}
	printf("%d\n", num);
	return 0;
}

int GONGSHI(int a, int d)
{
	int FANG(int b);
	int i, k = d, num = 0;

	for (i = 1; i <= a; ++i)
	{
		num = num + k * FANG(i);
	}
	return num;
}

int FANG(int b)
{
	int i, num = 1;
	if (b == 1)
		return b;
	else
	for (i = 0; i < b - 1; ++i)
	{
		num = num * 10;
	}
	return num;
}