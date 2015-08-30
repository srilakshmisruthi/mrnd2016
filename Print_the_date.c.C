#include<stdio.h>
void date(char *);
void ones(int);
void tens(int);
void teens(int);
void months(int);
void main()
{
	char a[15];
	printf("enter the date: ");
	scanf("%s",a);
	date(a);
}
void date(char a[])
{
	int i,j,k=0,s=0,d=0,n=0,m=0;
	char b[2],c[2],e[4];
	for(i=0;a[i]!='-';i++)
	{
		if(a[i]==0)
			i++;
		b[i]=a[i];
		j=i+1;
	}
	b[i]='\0';
	for(i=0;b[i]!=0;i++)
		s=s*10+(b[i]-48);
	d=s%10;
	n=s/10;
	if(n==0)
		ones(s);
	else if(n==2 ||n==3)
	{
		tens(n);
		ones(d);
	}
	else if(n==1)
	     {
		teens(s);
	     }
	printf("-");
	k=0;
	for(i=j+1;a[i]!='-';i++)
	{
		if(a[j]=='0')
			i++;
		c[k]=a[i];
		k++;
		m=i+1;
	}
	c[k]='\0';
	s=0;
	for(i=0;c[i]!=0;i++)
		s=s*10+(c[i]-48);
	months(s);
	printf("-");
	k=0;
	for(i=m+1;a[i]!='\0';i++)
	{
	    e[k]=a[i];
	    k++;
	}
	e[k]='\0';
	s=0;
	for(i=0;e[i]!=0;i++)
		s=s*10+(e[i]-48);
	d=s/1000;
	if(d!=0)
	{
		ones(d);
		printf(" thousand ");
	}
	n=(s/100);
	n=n%10;
	if(n!=0)
	{
		ones(n);
		printf(" hundred and ");
	}
	m=(s/10);
	m=m%10;
	if(m==1)
	{
		teens(s%100);
	}
	else
	{
		tens(m);

		m=s%10;
		ones(m);
	}
}
void tens(int n)
{
	switch(n)
	{
		case 2:printf(" twenty ");
			break;
		case 3:printf(" thirty ");
			break;
		case 4:printf(" fourty ");
			break;
		case 5:printf(" fifty ");
			break;
		case 6:printf(" sixty ");
			break;
		case 7:printf(" seventy ");
			break;
		case 8:printf(" eigthy ");
			break;
		case 9:printf(" ninety ");
			break;
	}
}
void ones(int n)
{
	switch(n)
	{
		case 0:printf(" ");
			break;
		case 1:printf(" one");
			break;
		case 2:printf("	two ");
			break;
		case 3:printf("	three ");
			break;
		case 4:printf("	four ");
			break;
		case 5:printf(" five ");
			break;
		case 6:printf("	six ");
			break;
		case 7:printf("seven ");
			break;
		case 8:printf("	eigth ");
			break;
		case 9:printf(" nine ");
			break;
	}
}
void teens(int s)
{
	switch(s)
	{
		case 10:printf(" ten ");
			break;
		case 11:printf(" eleven ");
			break;
		case 12:printf(" twelve ");
			break;
		case 13:printf(" thirteen ");
			break;
		case 14:printf(" fourteen ");
			break;
		case 15:printf(" fifteen ");
			break;
		case 16:printf(" sixteen ");
			break;
		case 17:printf(" seventeen ");
			break;
		case 18:printf(" eigtheen ");
			break;
		case 19:printf(" nineteen ");
			break;
	}
}
void months(int s)
{
	switch(s)
	{
		case 1:printf("january ");
			break;
		case 2:printf("febraury ");
			break;
		case 3:printf("march ");
			break;
		case 4:printf("april ");
			break;
		case 5:printf("may ");
			break;
		case 6:printf("june ");
			break;
		case 7:printf("july ");
			break;
		case 8:printf("august ");
			break;
		case 9:printf("september ");
			break;
		case 10:printf("october ");
			break;
		case 11:printf("november ");
			break;
		case 12:printf("december ");
			break;

	}
}