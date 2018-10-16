#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int left = 0, right = 50;
int ch[50] = { 0 };
int i,find=0;
int main(void)
{
	int SEACH(int a);
	int put = 0;
	for (i = 0; i < 50; i++)
	{
		ch[i] = i + 1;
	}
	printf("what do you want to find\n");
	scanf("%d", &find);
	put = SEACH(find);
	if (put != -1)
	{
	    printf("find it! the xia biao=%d",put);
	}
	if (put == -1)
	{
		printf("no,can`t find it,return -1");
	}
	return 0;
}

int SEACH(int a)
{
	int mid;
	while (left < right)
	{
	   mid = (left + right) / 2;
	   if (ch[mid] < find){
		left = mid+1;
	   }
	   else if (ch[mid] > find){
		   right = mid-1;
	   }
	   else if (ch[mid] == find){
		   return mid;
	   }
	}
	return -1;
}