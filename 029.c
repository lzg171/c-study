/*
����һ�������������Ǽ�λ������������� 
*/ 
#include <stdio.h>
int main()
{
	int n;
	int a;
	int count=0;
	printf("input integer n:\n");
	scanf("%d",&n);
	while(n>0)
	{
		count++;
		a=n%10;
		n=n/10;
		printf("%d",a);
		
	}
	printf("���Ǹ�%dλ��\n",count);
	
	return 0;
 } 
