/*
�����Լ������С������

����������շ���� 
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
	if(num1<num2)//������������ʹ�������num1 
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
	printf("��С��Լ���ǣ�%d\n",a);
	printf("��󹫱����ǣ�%d\n",num1*num2/a);
	return 0;
}
