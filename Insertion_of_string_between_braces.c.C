#include<stdio.h>
#include<conio.h>
void middle(char *,char *);
void main()
{
	char a[20],b[10];
	clrscr();
	printf("enter the string 1:");
	scanf("%s",a);
	printf("enter the string 2:");
	scanf("%s",b);
	middle(a,b);
	printf(" \n output string is  \n") ;
	printf("%s",a) ;
}
void middle(char a[],char b[])
{
	int i,j,l1=0,l2=0,s;
	for(i=0;*(a+i)!=0;i++)
		l1++;
	for(j=0;*(b+j)!=0;j++)
		l2++;
	i=0;
	while(a[i]!=0)
	{
		if((*(a+i)=='('&&*(a+i+1)==')')||(*(a+i)=='['&&*(a+i+1)==']')||(*(a+i)=='{'&&*(a+i+1)=='}')|| (*(a+i)=='<'&&*(a+i+1)=='>'))
		{
			s=i;
			break;
		}
		i++;
	}
	printf("%d",s);
	for(j=l1-1;j>s;j--)
		*(a+j+l2)=*(a+j);
	*(a+l1+l2)='\0';
	for(j=s+1,i=0;*(b+i)!=0&&j<=l1+l2;j++,i++)
		*(a+j)=*(b+i);
}