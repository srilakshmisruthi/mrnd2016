					
#include<stdio.h>
#include<conio.h>
void main()
{
	char a[20];
	int i;
	clrscr();
	printf("enter a string \n ");
	scanf("%s",a);
	i=length(a);
	printf("length of string is %d\n",i);
}
int length(char a[])
{
	int i;
	for(i=0;a[i]!=0;i++);
	return i;
}