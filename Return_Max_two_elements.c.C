#include<stdio.h>
#include<alloc.h>
void max(int a[],int n,int * m,int *sm);
void main()
{
	int a[20],n,i;
	int *m,*sm;
	printf("\n enter the range of the array:");
	scanf("%d",&n);
	printf("\n enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	m = (int *)malloc(sizeof(int));
	*m =*(a+0);
	sm = (int *)malloc(sizeof(int));
	*sm =*(a+0);
	 max(a,n,m,sm);
	 printf("%d\n",*(m));
	printf("%d\n",*sm);

}
void max(int a[],int n,int*m,int *sm)
{
	int i;
	*m =*(a+0);
	for(i=0;i<n;i++)
		if(a[i]<a[i+1]||a[i]>a[i+1])
		{
			if(a[i]<a[i+1])
			{
				*sm = *(a+i);
				break;
			}
			else
			{
				*sm = *(a+i+1);
				break;
			}
		}
	for(i=1;i<n;i++)
	{
		if(a[i]>*m)
		{
			*sm=*m;
			*m =*(a+i);

		}
		if(a[i]<*m&&a[i]>*sm)
			*sm =*(a+i);
	}



}
