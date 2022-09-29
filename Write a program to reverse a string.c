#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,d;
	printf("Enter the string:");
	gets(str);
	d=strlen(str);
	printf("The string in reverse order:");
	for(i=d-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}