/*
求矩阵对角线之和 
*/
#include <stdio.h>
#include <math.h>
#define N 3
int main()
{
	srand((unsigned)time(NULL));
	int i;
	int j;
	int a[N][N];
	int sum=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			a[i][j]=rand()%10+1;
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<N;i++)
	{
		sum=sum+a[i][i];
	}	
	printf("矩阵对角线之和为:%d\n",sum);
	return 0;
 } 
