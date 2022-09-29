#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;
	printf("Enter the string in upper case:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65&&str[i]<=90)
		{
			str[i]=str[i]+32;
		}
	}

	printf("The string in lower case:");
	puts(str);
}