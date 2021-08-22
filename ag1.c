#include<stdio.h>
int main()
{
	int Number1, Number2;
	printf("Enter Number1:");
	scanf("%d",&Number1);
	
	printf("Enter Number2:");
	scanf("%d",&Number2);
	
	if(Number1==Number2)
	{
		printf("Number1 and Number2 are equal");
	}
	else
	{
		printf("Number1 and Number2 are not equal");
	}
	return 0;
}
