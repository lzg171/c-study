/*
两个乒乓球队进行比赛，各抽三人，甲队为a,b,c,乙队为x,y,z;
已抽签决定比赛名单，有人向队员打听比赛的名单，a说他不和x比，c说他不和z比；
且每个比赛的队员不能有重复
请编程找出三队赛手的名单 
 
*/ 
#include <stdio.h>
int main()
{
	char i;//i是a的对手 
	char j;//j是b的对手 
	char k;//k是c的对手 
	for(i='x';i<='z';i++)
	{
		for(j='x';j<='z';j++)
		{
			if(i != j)
			{
				for(k='x';k<='z';k++)
				{
					if(i!=k&&j!=k)
					{
					
						if(i!='x'&&k!='z')
						{
							printf("order is %c,%c,%c\n",i,j,k);
						}
					}
				}
			}
		}
	}
	return 0;
}
