#include<stdio.h>

main()
{
	char name[100],temp[100];
	
	printf("enter your string=");
	gets(name);
	
	strcpy(temp,name);
	
	printf("reverse of yout string=%s\n",strrev(temp));
	
	if(strcmp(temp,name)==0)
	{
		printf("your string is palindrome");
	}
	else
	{
		printf("your string is not palindrome");
		
	}
	
	
}
