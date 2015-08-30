		
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s;
	clrscr();
	printf("enter a number \n");
	scanf("%d",&n);
	s=sum(n);
	printf("sum of digits of given number is %d",s);
}
int sum(int n)
{
	int s=0,d;
	while(n>0)
	{
		d=n%10;
		s=s+d;
		n=n/10;
	}
	return s;
}