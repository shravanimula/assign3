#include<stdio.h>
#include<string.h>
void freq_count(char s[])
{
	int i,c=0;
	char ch;
	printf("enter a char:");
	scanf("%c",&ch);
	for(i=0;s[i]!='\0';i++)
	{
		if(ch==s[i])
			c++;
	}
	if(c>0)
		printf("char found in the count is:%d\n",c);
	else
		printf("char not found\n");
}
int main()
{
	char s[20];
	printf("enter astring:\n");
	fgets(s,50,stdin);
	printf("the string is:%s",s);
	freq_count(s);
}

