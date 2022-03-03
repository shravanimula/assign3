#include<stdio.h>
#define size 50
int i;
int second_largest(int a[],int n)
{
	int sec_max=0,max=1;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			sec_max=max;
			max=a[i];
		}
		else if((a[i]>sec_max) &&(a[i]<max))
		{
			sec_max=a[i];
		}
	}
	return sec_max;
}
int main()
{
	int a[size],n,largest;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the array of elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	largest=second_largest(a,n);
	printf("\nthe second largest element:%d\n",largest);
}

