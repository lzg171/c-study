/*
��һ�������У�2/1 3/2 5/3 8/5 13/8......��ǰn���
 
*/
#include <stdio.h>
int main()
{
	float a=2;
	float b=1;
	float sn=0;
	float temp;
	int n;
	int i;
	printf("������n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sn=sn+a/b;
		temp=a;
		a=a+b;
		b=temp;
		printf("ǰ%d���Ϊ%.2f\n",i,sn);
	}
	printf("ǰ%d���Ϊ%.2f\n",n,sn);
	
	return 0;
 } 
