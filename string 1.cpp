#include<stdio.h>

main()
{
	char password[10], 
	username[10], ch;
	int i;
 
	printf("Enter User name: ");
	gets(username);
	
	printf("Enter the password < any 8 characters>: ");
	
	for (i=0;i<8;i++)
	{
            ch = getchar();
            
			password[i]=ch;
            
            printf("%c",ch);
	}
        password[i]='\0';
        
	printf("\n Your password is :");
	
	for (i=0;i<8;i++)
	{
            printf("%c",password[i]);
	}
}
