#include<stdio.h>
//float num,n=1.0;
int main(void)
{
	float num;
	float GONGSHI(float a);//����һ�������һ���㵽һ��
	num = GONGSHI(100.0);
	printf("%f\n", num);
	return 0;
}

float GONGSHI(float a){//ÿһ��Ӧ���������
	float FANG(float b);
	float num = 0;
	float n = 0;
	float i, j = 0.0;
	for (i = 1.0; i <= a; i++)
	{
		n = FANG(i);//�����ж�����
		num = num + -1.0 / i*n;
	}
	return num;
}

float FANG(float b){
	float i;
	float n=1.0;
	for (i = 1.0; i <= b; i++)
	{
		n = n*-1;
	}
	return n;
}