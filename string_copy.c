#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void mystrcpy(char dest[],char src[])
{
	int i=0;
	for(i=0;src[i]!='\0';i++)
		dest[i]=src[i];
	dest[i]='\0';
	printf("dest of string:%s\n",dest);
}
void mystrcpy_ptr(char *dest,char *src)
{
	int i=0;
	for(i=0;*(src+i)!='\0';i++)
		*(dest+i)=*(src+i);
	*(dest+i)='\0';
	printf("dest of string with ptr:%s\n",dest);
}
int main()
{
	char src[30],dest[30];
	printf("enter  a string1:");
	fgets(src,30,stdin);
	printf("source string:%s\n",src);
	mystrcpy(dest,src);
	mystrcpy_ptr(dest,src);
}
