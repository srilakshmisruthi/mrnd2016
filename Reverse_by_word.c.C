#include<stdio.h>
void reversestring(char *,int,int);
void reverse(char *);
void main()
{
	char a[20];
	int i,l=0;
	printf("enter the string \n");
	gets(a);
	for(i=0;a[i]!=0;i++)
	l++;
	reversestring(a,0,l-1);
	reverse(a);
	printf("output string is :");
	printf(" \n%s",a);
}
void reversestring(char a[],int x,int y)
{
	int i,temp;
	for(i=x;*(a+i)!=0 && y>=i;i++)
	{
		if(*(a+i)!=*(a+y))
		{
			temp=*(a+i);
			*(a+i)=*(a+y);
			*(a+y)=temp;
		}
		y--;
	}
}
void reverse(char a[])
{
	int i,j=0;
	for(i=0;*(a+i)!=0;i++)
	{
		if(*(a+i)==' ')
		{
			reversestring(a,j,i-1);
			j=i+1;
		}
		else if(*(a+i+1)=='\0')
		{
			reversestring(a,j,i);
			j=i+1;
		}

	}
}