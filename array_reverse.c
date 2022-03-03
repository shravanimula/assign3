#include<stdio.h>
#define size 50
void fun_reverse(int a[],int n)
{
	int i,j,temp;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("\nafter reverse of elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}	
void fun_reverse_ptr(int *a,int n)
{
	int i,j,temp;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=*(a+i);
		*(a+i)=*(a+j);
		*(a+j)=temp;
	}
	printf("\nafter reverse with pointer of elements:\n");
	for(i=0;i<n;i++)
		printf("%d\t",*(a+i));
}
int main()
{
	int a[size],i,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array of elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	fun_reverse(a,n);
	fun_reverse_ptr(a,n);
}
