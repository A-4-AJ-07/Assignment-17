#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,c1,c2,c3;
	printf("Enter the string:");
	scanf("%s",str);
	
	c1=c2=c3=0;
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
		c1++;
		else if(str[i]>=48&&str[i]<=57)
		c2++;
		else if((str[i]>=32&&str[i]<=47)||(str[i]>=58&&str[i]<=64)||(str[i]>=91&&str[i]<=96)||(str[i]>=123&&str[i]<=126))
		c3++;
	}
	printf("Total no. of alphabet in string:%d",c1);
	printf("\nTotal no. of digits in string:%d",c2);
	printf("\nTotal no. of special character in string:%d",c3);
	
}