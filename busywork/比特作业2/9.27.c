#include<stdio.h>
//float num,n=1.0;
int main(void)
{
	float num;
	float GONGSHI(float a);//传入一百令其从一计算到一百
	num = GONGSHI(100.0);
	printf("%f\n", num);
	return 0;
}

float GONGSHI(float a){//每一项应该输出的数
	float FANG(float b);
	float num = 0;
	float n = 0;
	float i, j = 0.0;
	for (i = 1.0; i <= a; i++)
	{
		n = FANG(i);//用于判断正负
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