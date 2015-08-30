					
#include<stdio.h>
#include<conio.h>
void rotate(int *,int,int);
void main()
{
	int a[20],i,n,r;
	clrscr();
	printf("enter no of elements of array\n");
	scanf("%d",&n);
	printf("enter the elements of array \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter no of rotations of the array \n");
	scanf("%d",&r);
	if(r<0)
		printf(" invalid input \n");
	else if(n==r || r==0 || n%r==0)
	{
		printf("array after rotations is  \n");
		for(i=0;i<n;i++)
			printf("%d   ",a[i]);
	}
	else
	{
		rotate(a,n,r);
		printf("array after rotations is  \n");
		for(i=0;i<n;i++)
			printf("%d   ",a[i]);
	}
}
void rotate(int a[],int n,int r)
{
	int i,t;
	while(r>0)
	{
		t=*(a+n-1);
		for(i=n-1;i>0;i--)
			*(a+i)=*(a+i-1);
		*(a+0)=t;
		r=r-1;
	}
}