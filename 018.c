/**/
#include <stdio.h>
int main()
{
	int a;
	int n;
	int s;
	int i;
	scanf("%d,%d",&a,&n);
	for(i=1;i<=n;i++)
	{
		s=s*10+a;
	}
	printf("s=%d\n",s);
	return 0;
 } 
