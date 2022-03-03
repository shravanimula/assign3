#include<stdio.h>
#include<stdlib.h>
#include<string.h>
unsigned int mystrlen(const char *p)
{
	unsigned int cnt=0;
	while(*p)
	{
		cnt++;
		p++;
	}
	return cnt;
}
int main()
{
	char s1[50];
	printf("enter astring:");
	fgets(s1,50,stdin);
	int i,len;
	printf("the char of string:\n");
	for(i=0;s1[i]!='\0';i++)
	{
		printf("%c\t",s1[i]);
	}
	printf("char of string is:%s",s1);
	printf("address of string:\n");
	for(i=0;s1[i]!='\0';i++)
	{
		printf("%p\n",&s1[i]);
	}
	printf("length of string:%ld\n",strlen(s1));
	len=mystrlen(s1);
	printf("length of string in function:%d\n",len);
}
