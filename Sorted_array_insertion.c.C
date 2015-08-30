				
#include<stdio.h>
#include<conio.h>
void sort(int *,int,int);
void main()
{
	int a[20],i,n,s;
	printf("enter no of elements of array\n");
	scanf("%d",&n);
	printf("enter the elements of array \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter element to insert into array \n");
	scanf("%d",&s);
	sort(a,n,s);
	printf("sorted array is \n");
	for(i=0;i<n+1;i++)
		printf("%d   ",a[i]);
}
void sort(int *a,int n,int s)
{
	int i,j;
	*(a+n)=0;
	for(i=0;i<n+1;i++)
	{
		if(s<a[0])
		{
			for(j=n+1;j>0;j--)
				*(a+j)=*(a+j-1);
			*(a+0)=s;
		}
		else if(s>a[n-1])
			*(a+n)=s;
		     else if(*(a+i)<s && *(a+i+1)>=s)
		     {
			for(j=n+1;j>i;j--)
				*(a+j)=*(a+j-1);
			*(a+i+1)=s;
		     }
	}
}