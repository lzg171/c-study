/*
��1!+2!+3!+4��+������������+20�� 
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
		printf("ǰ%d��׳˵ĺ�1!+2!+3!+...��%.f\n",n,sn);
	}
	return 0;
}
