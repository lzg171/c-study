/*
条件运算符的基本例子
(a>b)?a:b 
*/ 
#include<stdio.h>
int main()
{
	int score;
	char grade;
	printf("input score:\n");
	scanf("%d",&score);
	grade=(score>=90)?'A':(score>=60?'B':'C');
	printf("%d belongs to %c\n",score,grade);
	return 0;
}
