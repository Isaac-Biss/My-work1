#include<stdio.h>
int main()
{
	int i;
	printf("Enter the Temperature:");
	scanf("%d",&i);
	
	if(i>=40)
	{
		printf ("It's Very hot");
	}
	else if(i<40&&i>=30)
	{
		printf("It's Hot");
	}
	else if(i<30&&i>=20)
	{
		printf("Normal in Temp'");
	}
	else if(i<20&&i>=10)
	{
		printf("Cold weather");
	}
	else if(i<10&&i>=0)
	{
		printf("Very Cold weather");
	}
	else
	{
		printf("Freezing weather");	
	}
	return 0;
}
