/*
求最大公约数和最小公倍数

分析：利用辗除法 
*/
#include <stdio.h>
int main()
{
	int a;
	int b;
	int num1;
	int num2;
	int temp;
	printf("input num1 and num2 :\n");
	scanf("%d,%d",&num1,&num2);
	if(num1<num2)//交换两个数，使最大数是num1 
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	a=num1;
	b=num2;
	while(b!=0)
	{
		temp=a%b;
		a=b;
		b=temp;
	}
	printf("最小公约数是：%d\n",a);
	printf("最大公倍数是：%d\n",num1*num2/a);
	return 0;
}
