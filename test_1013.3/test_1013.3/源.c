#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int password=123456,receive=0;
int main(void)
{
	void TEST(int a);
	printf("��������λ������\n");
	scanf("%d", &receive);
	TEST(receive);
	return 0;
}

void TEST(int a)
{
	int i=1;
	while (i<=2){
		if (password == receive){
			printf("������ȷ");
			break;
		}
		printf("�������,����������\n");
		scanf("%d", &receive);
		++i;
	}
}