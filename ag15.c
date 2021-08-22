#include<stdio.h>
int main()
{
	char character;
	
	printf("Enter the character:");
	scanf("%c",&character);
	
	if((character>='a'&&character<='z')||(character>='A'&&character<='Z'))
	{
		printf("The character is a letter");
	}
	
	else if(character>='0'&&character<='9')
	{
		printf("The character is a digit");
	}
	
	else
	{
		printf("This is a special character");	
	}
	
	return 0;
}
