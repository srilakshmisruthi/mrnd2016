#include<stdio.h>
int reptchar(char *);
void main()
{
	char a[20];
	int r;
	printf("enter the string :");
	scanf("%s", a);
	r = reptchar(a);
	if (r != -1)
		printf("%c", a[r]);
	else
		printf("no character");
}
int reptchar(char a[])
{
	int s[256] = { 0 }, l = 0, i = 0;
	while (a[i])
	{
		s[a[i]]++;
		i++;
		l++;
	}
	for (i = 0; i < 256; i++)
		if (s[a[i]]>=(l / 2))
			return i;
	return -1;
	
}


