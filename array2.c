#include<stdio.h>
int main()
{
	char c[10]={'a','b','A','u','e','U','I','t','o','i'};
	int cnt,i;
	for(i=0;i<10;i++)
	{
		if(c[i]=='a' ||c[i]=='A' ||c[i]=='e' ||c[i]=='E' ||c[i]=='i'|c[i]=='I'||c[i]=='O'||c[i]=='o'||c[i]=='u'||c[i]=='U')
		{
			printf("array of vowel element:%c\n",c[i]);
			printf("array of char address is:%p\n",&c[i]);
			printf("array of positions:%d\n",i);
		}
	}
}
