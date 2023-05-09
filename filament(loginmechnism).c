#include<stdio.h>

main()
{
	char email[100]="login@gmail.com";
	char password[100]="password";
	char email1[100];
	char password1[100];
	
	printf("enter your email=");
	gets(email1);
	printf("enter your password=");
	gets(password1);
	
   if (strcmp(email,email1)==0 && strcmp(password,password1) == 0) 
   {
        printf("Login successful\n");
    } 
	else 
	{
        printf("Invalid username or password\n");
    }
	
}
