/*
�ַ�������ַ������������ 
   %s�������ַ�����������һ���հ��ַ��������س����ո��Ʊ����ʱ������
   %c������һ���ַ����հ��ַ��������س����ո��Ʊ����Ҳ��Ϊ��Ч�ַ����룻
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
           //scanf("%c",&ch);/*�������Ϊ%c���ַ����룬�Ͳ��ܹ�ѭ��*/
        /*
		%c�����뵥���ַ���%s�������ַ�������%c����£�������123֮���û��س�
		���ʱ�򣬻س����൱��һ���ַ�����ʱ�Ͱ� \n ��ֵ����ch�����ж�while(ch=='y' || ch=='Y'); 
		*/
        }
		while(ch=='y' || ch == 'Y');
    return 0;
}

