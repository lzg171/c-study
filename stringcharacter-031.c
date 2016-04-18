/*
字符输入和字符串输入的区别 
   %s：输入字符串，遇到第一个空白字符（包括回车，空格，制表符）时结束；
   %c：输入一个字符，空白字符（包括回车，空格，制表符）也作为有效字符输入；
*/
#include<stdio.h>
int main()
{
    int n,m;
    char ch,c;
    do
		{
        printf("input three digits:\n");
        scanf("%d",&n);
        if(n>99 && n<1000)
		{
            m=(n%10)*100 + ((n/10)%10)*10 + (n/100);
            printf("%d\n",m);
        }
        else
            printf("Whether to continue the input:\n");        
        printf("input Y/N:\n");
           scanf("%s",&ch);
           //scanf("%c",&ch);/*把输入改为%c，字符输入，就不能够循环*/
        /*
		%c是输入单个字符，%s是输入字符串；在%c情况下，当输入123之后，敲击回车
		这个时候，回车就相当于一个字符，这时就把 \n 赋值给了ch；再判断while(ch=='y' || ch=='Y'); 
		*/
        }
		while(ch=='y' || ch == 'Y');
    return 0;
}

