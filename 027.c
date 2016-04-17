/*
用递归调用方式，将输入的字符按相反顺序输出 
*/
#include <stdio.h>
int main()
{
	char s[80];
	printf("请输入字符串:\n");
	gets(s);
	void fun(char *s);
	fun(s);

	return 0;
}
void fun(char *s)
{
	if(*s)
	{
		fun(s+1);
		putchar(*s);
	}
}
