/*
求：1!+2!+3!+4！+。。。。。。+20！ 
*/
#include <stdio.h>
int main()
{
	int n;
	float sn=0;
	float an=1;
	for(n=1;n<=20;n++)
	{
		
		an=an*n;
		sn=sn+an;
		printf("前%d项阶乘的和1!+2!+3!+...是%.f\n",n,sn);
	}
	return 0;
}
