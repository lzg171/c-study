/*
����һ���ַ���ͳ�Ƴ���ĸ�����֡��ո�������ַ��ĸ��� 
*/ 
#include <stdio.h>
int main()
{
	char c;
	int letter=0;//��ĸ���� 
	int digit=0;//���ָ��� 
	int space=0;//�ո���� 
	int other=0;
	printf("input some characters:\n");
	while( (c=getchar())!='\n')
	{
		if(c>='a'&&c<='z' || c>='A'&&c<='Z')
		{
			letter++;
		}
		else if(c>='0' && c<='9')
		{
			digit++;
		}
		else if(c==' ')
		{
			space++;
		}
		else
		{
			other++;
		}
	}
	printf("letter=%d,digit=%d,space=%d,other=%d\n",letter,digit,space,other);
	
	
	return 0;
}
