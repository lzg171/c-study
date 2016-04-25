/*
∫Í∂®“Â define 
*/ 
#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)
int main()
{
	int num;
	int again=1;
	printf("program will stop if the num less than 50\n");
	while(again)
	{
		printf("please input num:\n");
		scanf("%d",&num);
		printf("the aquare for this num is :%d\n",SQ(num));
		if(num>=50)
		{
			again=1;
		}
		else 
		{
			again=0;
			//printf("over\n");
		}
	}
}
