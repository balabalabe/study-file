#include<stdio.h>
int i, n,num=0;
int main(){
	int figure(int i,int n);
	scanf("%d", &n);
	for (i = 1; i < 6; i++)
	{
		num = num + figure(i,n);
	}
}

int figure(int i,int n)
{
	int k;
	for (k = 0; k < i; k++)
	{
		num = num*n;
	}
}