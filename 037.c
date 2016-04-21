/*
排序 
分析：从后9个比较过程中，选择一个最小的与第一个元素交换，一次类推；第二个元素与后8个元素比较，进行交换 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define N 18
int main()
{
	srand( (unsigned)time(NULL) );/*将当前时间设成随机函数的种子，每次产生的数都不一样*/
	int i;
	int j;
	int temp;
	int a[N];
	int min;
	for(i=0;i<N;i++)
	{
		//printf("input integer a[%d]:\n",i);
		//scanf("%d",&a[i]);
		a[i]=rand()%30+1;//产生1到30的随机数 
	}
	for(i=0;i<N;i++)
	{
		printf("a[%d]=%d\t",i,a[i]);
	}
	printf("\n");
	/*sort number*/
	for(i=0;i<N;i++)
	{		
		for(j=i+1;j<N;j++)
		{
			if(a[i]>a[j])
			{				
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("after sorted:\n");
	for(i=0;i<N;i++)
	{
		printf("a[%d]=%d\t",i,a[i]);
	}

	return 0;
}
