#include<stdio.h>
int i,j;
void fun_dec(int a[],int n)
{
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nafter sort the elements:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
int main()
{
	int a[50],n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the array of elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("before sort the elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);

	}
	fun_dec(a,n);
}
