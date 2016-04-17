/*
µÝ¹é·¨Çó½×³Ë 
*/
#include <stdio.h>
int main()
{
	int fact();
	int i;
	for(i=1;i<=20;i++)
	{
		
		printf("%d!=%d\n",i,fact(i));
	}
	return 0;
 } 
 int fact(j)
 {
 	
 	int sum=0;
 	if(j==0)
 	{
 		sum=1;
	 }
	 else
	 {
	 	sum=j*fact(j-1);
	 }
	 return sum;
 	
 }
