/*
�������⣬��һ���˱���һ���˴����� 
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
		printf("��%d���˵�������%d��\n",i,a);
	}
	return 0;
}
*/
#include <stdio.h>
int main()
{
	int age();//���庯�� 
	int n;
	printf("�������ǵڼ����ˣ�\n");
	scanf("%d",&n);
	age(n);//�������� 
	printf("��%d���˵�������%d��\n",n,age(n));
	
}
int age(n)//�ݹ麯�� 
{
	
	int c;
	if(n==1)
	{
		c=10;
	}
	else
	{
		c=age(n-1)+2;/*n==1ʱ��c��age()�Ĺ�ϵ��*/ 
	}
	
	return (c);
	
	
}
