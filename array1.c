#include<stdio.h>
int d[5];//global array
int main()
{
	int a[5],i;
	int b[5]={10,20,30,40,50};
	int c[5]={10,20};
	char ch[5]={'a','b','c','d','e'};
	int e[5]={1,2,3,4,5};
	for(i=0;i<5;i++)
		printf("address of char elements:%p\n",&ch[i]);
	printf("elements of array:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("array of elements:");
	for(i=0;i<5;i++)
		printf("%d\t",b[i]);
	printf("\n");
	printf("the array of elements:");
	for(i=0;i<5;i++)
		printf("%d\t",c[i]);
	printf("\n");
	printf("%d\t",b[0]);
	printf("%d\t",*(b+1));
	printf("%d\t",*(b+2));
	printf("%d\t",b[3]);
	printf("%d\n",b[4]);
	printf("global elements of array:");
	for(i=0;i<5;i++)
		printf("%d\t",d[i]);
	printf("\n");
	printf("address of elements without using for/while loop:\n");
	printf("array of address of 1st element of array:%p\n",&b[0]);
	printf("array of address of 2st element of array:%p\n",&b[1]);
	printf("array of address of 3st element of array:%p\n",&b[2]);
	printf("array of address of 4st element of array:%p\n",b+3);
	printf("array of address of 5st element of array:%p\n",b+4);
	printf("using while loop:\n");
	//printf("enter the size of array:\n");
	//scanf("%d",&n);
/*	printf("array of elements:\n");
	while(i<5)
	{
		scanf("%d",&e[i]);
		i++;
	}*/
	for(i=0;i<5;i++)
		printf("%d\n",e[i]);
	int j=0;
	while(j<5)
	{
		printf("array of elements:%d\n",e[j]);
		j++;
	}
}

