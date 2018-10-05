#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i = 0;
	int ch[100] = { 0 };
	for (i = 0; i < 100; ++i){  //给数组赋值
		ch[i] = i + 1;
	}
	int guess = 0, zuo = 0, you = 99, mid = 0;
	guess = rand() % 100;     //得到随机值
	printf("%d\n", guess);
	while (zuo <= you)//左小于等于右时执行循环
	{
		if (ch[(zuo + you) / 2] < guess)
		{
			zuo = (zuo + you) / 2 + 1;//没有+1有时会死循环
		}
		if (ch[(zuo + you) / 2] > guess)
		{
			you = (zuo + you) / 2 - 1;//没有-1有时会死循环
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