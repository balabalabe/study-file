#include<stdio.h>
int main(void)
{
	int i;
	int ch[5] = { 1, 5, 4, 2, 9 };
	int ah[5] = { 1, 7, 7, 4, 2 };
	int bh[5] = { 0 };
	for (i = 0; i < sizeof(ch) / sizeof(ch[0]); i++)
	{
		bh[i] = ch[i];
		ch[i] = ah[i];
		ah[i] = bh[i];
	}
	for (i = 0; i < sizeof(ch) / sizeof(ch[0]); i++)
	{
		printf("%d", ch[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(ch) / sizeof(ch[0]); i++)
	{
		printf("%d", ah[i]);
	}
	printf("\n");
	return 0;
}