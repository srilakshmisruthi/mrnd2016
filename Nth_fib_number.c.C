#include<stdio.h>
#include<alloc.h>
#include<conio.h>
int fibonacci(int);
void main()
{
	int n,i;
	clrscr();
	printf("enter the n value:");
	scanf("%d",&n);
	i=fibonacci(n);
	printf("\n %dth fibonacci number is %d ",n,i);
}
int fibonacci(int n)
{
	int i;
	int *a;
	a=(int *)malloc(n*sizeof(int));
	a[0]=0;
	a[1]=1;
	for(i=2;i<n;i++)
		a[i]=a[i-1]+a[i-2];
	return a[n-1];
}