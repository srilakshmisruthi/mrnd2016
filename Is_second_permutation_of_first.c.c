#include<stdio.h>
void main()
{
	char a[20], b[20];
	int i;
	printf("enter the first string :");
	scanf("%s", a);
	printf("enter the second string :");
	scanf("%s", b);
	i = permut(a, b);
	if (i == 1)
		printf("true");
	else
		printf("false");
	
}
int permut(char a[], char b[])
{
	int s[256] = { 0 }, d[256] = { 0 },i=0,j=0;
	while (a[i])
	{
		s[a[i]]++;
		i++;
	}
	while (b[j])
	{
		d[b[j]]++;
		j++;
	}
	i = 0;
	j = 0;
	if (s[a[i]] == d[b[i]])
		i++;
	else
		return 0;
	return 1;
}