/*
�õݹ���÷�ʽ����������ַ����෴˳����� 
*/
#include <stdio.h>
int main()
{
	char s[80];
	printf("�������ַ���:\n");
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
