/*
monday
tuesday
wednesday
thursday
friday
saturday
sunday
�����һ����ĸ���ж������ڼ��������һ����ĸ��ͬ�����жϵڶ�����ĸ 
*/ 
#include <stdio.h>
int main()
{
	char letter;
	printf("please input first letter of someday:\n");
	while((letter=getch())!='y')
	{
		switch(letter)
		{
			case 's':
				printf("please input the second letter:\n");
				if(letter=getch()=='a')
				{
					printf("saturday\n");
				 } 
				 else if(letter=getch()=='u')
				 {
				 	printf("sunday\n");
				 }
				 else
				 {
				 	printf("data error\n");
				 }
				 break;
			case 'm':
				printf("monday\n");
				break;
			case 'f':
				printf("friday\n");
				break;
			case 'w':
				printf("wednesday\n");
				break;
			case 't':
				printf("please input the second letter:\n");
				if(letter=getch()=='u')
				{
					printf("tuesday\n");
					
				}
				else if(letter=getch()=='h')
				{
					printf("thursday\n");
				}
				else
				 {
				 	printf("data error\n");
				 }
				break;
			default:
				printf("data error\n");
					
		}
	}
	return 0;
 } 
