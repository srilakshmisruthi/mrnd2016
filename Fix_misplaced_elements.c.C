				
#include<stdio.h>
#include<conio.h>
void posnsort(int *,int);
void main()
{
	int a[20],i,n;
	clrscr();
	printf("enter no of elements of array\n");
	scanf("%d",&n);
	printf("enter the elements of array \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	posnsort(a,n);
	printf("sorted array is \n");
	for(i=0;i<n;i++)
		printf("%d   ",a[i]);
}
void posnsort(int a[],int n)
{
	int i,s,temp,t;
	if(*(a+0)>*(a+1))
	{
		s=*(a+0);
		for(i=1;i<n;i++)
			if(s>*(a+i) && s>*(a+i+1) && (s<*(a+i+2)||i==n-2))
			{
				temp=*(a+i+1);
				*(a+i+1)=*(a+0);
				*(a+0)=temp;
			}
	}
	else if(*(a+n-1)<*(a+n-2))
	     {
		s=*(a+n-1);
		for(i=0;i<n-1;i++)
			if(*(a+i)<s && *(a+i+1)>s && *(a+i+2)>=s)
			{
				temp=*(a+i+1);
				*(a+i+1)=*(a+n-1);
				*(a+n-1)=temp;
			}
	     }
	     else
	     {
		for(i=0;i<n;i++)
		{
			if(*(a+i)>*(a+i+1))
			{
				s=*(a+i);
				t=i;
				break;
			}
		}
		for(i=0;i<n;i++)
			if(*(a+i)<=s && *(a+i+1)<s && *(a+i+2)>s)
			{
				temp=*(a+i+1);
				*(a+i+1)=*(a+t);
				*(a+t)=temp;
				i--;
			}
	     }
}