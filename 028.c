/*
年龄问题，上一个人比下一个人大两岁 
*/
/*
#include <stdio.h>
int main()
{
	int a=10;
	
	int i;
	for(i=1;i<=5;i++)
	{
		a=a+2;
		printf("第%d个人的年龄是%d岁\n",i,a);
	}
	return 0;
}
*/
#include <stdio.h>
int main()
{
	int age();//定义函数 
	int n;
	printf("请输入是第几个人：\n");
	scanf("%d",&n);
	age(n);//函数调用 
	printf("第%d个人的年龄是%d岁\n",n,age(n));
	
}
int age(n)//递归函数 
{
	
	int c;
	if(n==1)
	{
		c=10;
	}
	else
	{
		c=age(n-1)+2;/*n==1时，c与age()的关系？*/ 
	}
	
	return (c);
	
	
}
