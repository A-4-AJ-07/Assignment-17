#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;
	printf("Enter the string in lower case:");
	fgets(str,11,stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97&&str[i]<=122)
		{
			str[i]=str[i]-32;
		}
	}

	printf("The string in upper case:");
	puts(str);
}