/*
将一个正整数分解质因数，例如：输入90，打印出：90=2*3*3*5；
分析：
对n进行分解质因数，先找到一个最小的质数K; 
（1）如果这个质数恰等于n,则结束，输出
（2）如果n>k，但n能被K整除，则应打印出K的值，并且用n除以k的值作为新的正整数n;重复执行第一步
（3）如果n不能被k整除，则用（k+1）作为k的值，重复执行第一步 
*/ 
#include<stdio.h>
int main()
{
	int n;
	int i;
	printf("input n:\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		while(n!=i)
		{
			if(n%i==0)
			{
				printf("%d*",i);
				n=n/i;
			}
			else
			{
				break;
			}
		}
	}
	printf("%d",n);
	printf("\n");
	return 0;
 } 
