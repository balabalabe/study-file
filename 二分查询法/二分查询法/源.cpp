#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i = 0;
	int ch[100] = { 0 };
	for (i = 0; i < 100; ++i){  //�����鸳ֵ
		ch[i] = i + 1;
	}
	int guess = 0, zuo = 0, you = 99, mid = 0;
	guess = rand() % 100;     //�õ����ֵ
	printf("%d\n", guess);
	while (zuo <= you)//��С�ڵ�����ʱִ��ѭ��
	{
		if (ch[(zuo + you) / 2] < guess)
		{
			zuo = (zuo + you) / 2 + 1;//û��+1��ʱ����ѭ��
		}
		if (ch[(zuo + you) / 2] > guess)
		{
			you = (zuo + you) / 2 - 1;//û��-1��ʱ����ѭ��
		}
		if (ch[(zuo + you) / 2] == guess)
		{
			mid = (zuo + you) / 2;
			printf("find it,it is the %d number\n", mid);
			break;
		}
	}
	return 0;
}