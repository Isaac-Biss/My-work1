#include<stdio.h>
int main()
{
	int i;
	printf("Enter the number:");
	scanf("%d",&i);
	if(i>0)
	{
		printf("The number%d is a positive integer",i);
	}
	else
	{
		printf("The number%d is a negative integer",i);	
	}
	return 0;
}
