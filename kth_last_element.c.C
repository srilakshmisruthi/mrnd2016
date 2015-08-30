					
#include<stdio.h>
#include<conio.h>
int kelement(char *,int);
void main()
{
	char a[20];
	int k,l;
	clrscr();
	printf("enter the string \n");
	scanf("%s",a);
	printf("enter the k value \n");
	scanf("%d",&k);
	l=kelement(a,k);
	if(l==-1)
		printf("array out of bound");
	printf("last from kth element is %c",a[l]);
}
int kelement(char a[],int k)
{
	int i;
	for(i=0;a[i]!=0;i++)
		if(a[i+k]==0)
			return i;
	return -1;
}
