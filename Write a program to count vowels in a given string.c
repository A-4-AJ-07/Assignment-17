#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int i,count=0;
	printf("Enter the word:");
	fgets(str,11,stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		count++;
	}
	printf("%d vowels in the word.",count);
}