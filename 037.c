/*
���� 
�������Ӻ�9���ȽϹ����У�ѡ��һ����С�����һ��Ԫ�ؽ�����һ�����ƣ��ڶ���Ԫ�����8��Ԫ�رȽϣ����н��� 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define N 18
int main()
{
	srand( (unsigned)time(NULL) );/*����ǰʱ�����������������ӣ�ÿ�β�����������һ��*/
	int i;
	int j;
	int temp;
	int a[N];
	int min;
	for(i=0;i<N;i++)
	{
		//printf("input integer a[%d]:\n",i);
		//scanf("%d",&a[i]);
		a[i]=rand()%30+1;//����1��30������� 
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
