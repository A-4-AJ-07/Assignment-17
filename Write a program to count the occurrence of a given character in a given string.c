#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	char a;
	int i;
	printf("Enter the word:");
	fgets(str,11,stdin);
	puts(str);
	printf("Enter the alphabet:");
	scanf("%c",&a);
    int count=0;
    for(i=0;str[i]!=NULL;i++)
    {
    	if(str[i]==a)
    	count++;
	}
	printf("Total number of occurence:%d",count);
}
