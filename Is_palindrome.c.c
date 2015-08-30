#include<stdio.h>
void main()
{
	char s[20], n;
	printf("enter the string : ");
	gets( s);
	n = palindrome(s);
	if (n == 1)
		printf("given string is a palindrome \n");
	else if (n==-1)
		printf("given string is not a palindrome \n");
}
int palindrome(char s[])
{
	int i,l=0,j,flag=0;
	for (i = 0; s[i] != 0; i++)
		l++;
	for (i = 0, j = l - 1; i <= j; i++, j--)
	{
		if (s[i] != s[j])
		{
			flag = 1;
			break;
		}

	}
	if (flag == 0)
		return 1;
	else
		return -1;
}