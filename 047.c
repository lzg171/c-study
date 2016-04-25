/*
宏定义 define 使用
宏定义中 允许包含两道衣裳命令的情形，此时必须在最右边加上"\"
*/
#include <stdio.h>
#define exchange(a,b) {\
                                     int t;\
                                     t=a;\
                                     a=b;\
                                     b=t;\
                                     }
                                     int  main()
                                     {
                                     int x=10;
                                     int y=20;
                                     printf("x=%d,y=%d\n",x,y);
                                     exchange(x,y);
                                     printf("x=%d,y=%d\n",x,y);
                                     return 0;
                                     }
