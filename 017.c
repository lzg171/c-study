/*
给出一行字符，统计出字母、数字、空格和其他字符的个数 
*/ 
#include <stdio.h>
int main()
{
	char c;
	int letter=0;//字母个数 
	int digit=0;//数字个数 
	int space=0;//空格个数 
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
