#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,freq[150]={0};
	printf("Enter the element of string:");
	fgets(str,100,stdin);
	for(i=0;str[i]!=NULL;i++)
	{
		freq[str[i]]++;
	}
    for(i=0;i<150;i++)
    {
    	if(freq[i]!=0)
    	{
    		printf("%c occurs %d\n",i,freq[i]);
		}
	}
	
}