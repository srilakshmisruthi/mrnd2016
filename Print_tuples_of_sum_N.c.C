#include<stdio.h>
void tuple(int *, int, int);
void main()
{
	int a[10], i, n, s;
	printf("enter range of array :");
	scanf("%d", &n);
	printf("sum value : ");
	scanf("%d", &s);
	printf("array elemnts");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	tuple(a, n, s);
}
void tuple(int a[], int n,int s)
{
	int i, j,b[256]={0};
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n;j++)
			if (a[i] + a[j] == s)
			{
				b[a[i]]++;
				b[a[j]]++;
			}
	for(i=0;a[i]<256;i++)
		if(b[i]!=0)
			printf("%d ",i);

}