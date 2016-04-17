/*
一球从100米高度自由落下，每次落地后反跳回原高度的一半，再落下，求
它在第10次落地时，共经过多少米？第10次反弹多高？
*/
#include <stdio.h>
int main()
{
          float sn=100;//初始高度,即第一次落地时经过的距离
          float hn=sn/2;//反弹的高度 
           int n;//落地次数          
         /* printf("请输入初始高度h:\n");
          scanf("%d",&h);
          printf("请输入落地次数n:\n");
          scanf("%d",&n);*/
          for(n=2;n<=10;n++)
          {
                  sn=sn+hn*2;
                  hn=hn/2;
                  printf("第%d次落地时，共经过%f米\n",n,sn);
                  printf("第%d次反弹%f米\n",n,hn);
          }
          
return 0;
}
