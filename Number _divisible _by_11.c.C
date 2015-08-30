#include<stdio.h>
#include<math.h>
void main()
{
	int n,m;
	printf("enter the number:");
	scanf("%d",&n);
	 m = div(n);
	 if(m==1)
		 printf("\ndivisible by 11");
	 else
		 printf("\nnot divisible by 11");
}
int div(int n)
{
	int r,m=0,s,i=0,os=0,es=0;
	while(n>0)
	{
		r=n%10;
		if(i==0)
		{
			es=r+es;
			i++;
		}
		else if(i==1)
		{
			os=r+os;
			i--;
		}
		n=n/10;
	}
	if((os-es)!=0)
	{
		n=abs(os-es);
		if(n>11)
		{
			m=div(n);
			return m;
		}
		else if(n<11)
			return 0;
	}
	return 1;
}
