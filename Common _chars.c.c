#include<stdio.h>
void commonchar(char *, char *);
void main()
{
	char a[20], b[20];
	printf("enter the first string \n");
	gets(a);
		printf("enter the second string :");
		gets(b);
		commonchar(a, b);

}
void commonchar(char a[], char b[])
{
	int x[256] = { 0 }, y[256] = { 0 };
	int i = 0;
	while (a[i])
	{
		x[a[i]]++;
		i++;
	}
	i = 0;
	while (b[i])
	{
		y[b[i]]++;
		i++;

	}
	i = 0;
	for (i = 0; i < 256; i++)
		if (x[i] != 0 && y[i] != 0)
			printf("%c", i);
}

