/*
给出一个整数，求他是几位数，并逆序输出 
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
	printf("这是个%d位数\n",count);
	
	return 0;
 } 
