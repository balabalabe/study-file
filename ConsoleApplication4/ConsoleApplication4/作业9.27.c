#include<stdio.h>
int main()
{
	int i, flower = 0, j, k, l;
	for (i = 100; i < 999; i++)
	{
		j = i / 10 % 10;//����ʮλ
		k = i % 10;//�����λ
		l = i / 100;//�����λ
		if (i == j*j*j + k*k*k + l*l*l)
		{
			printf("%d��ˮ�ɻ���\n", i);
		}
	}
	return 0;
}