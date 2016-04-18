/*
monday
tuesday
wednesday
thursday
friday
saturday
sunday
输入第一个字母来判断是星期几，如果第一个字母相同，则判断第二个字母 
*/ 
#include <stdio.h>
int main()
{
	char letter;
	do
		{
		printf("please input first letter of someday:\n");
		scanf("%s",&letter);
			{	
				switch(letter)
				{
					case 's':
						printf("please input the second letter:\n");
						scanf("%s",&letter);
						if( letter=='a')
						{
						
							printf("saturday\n");
						} 
						else if( letter=='u')
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
						scanf("%s",&letter);
						if(letter=='u')
						{					
							printf("tuesday\n");
						}
					else if(letter=='h')
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
		}	
	while(letter!='y');/*当所按字母为y时才结束*/ 
	
	return 0;
 } 
