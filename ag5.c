#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	char Name[15];
	printf("Enter the Name:");
	scanf("%s",&Name);
	
	printf("Enter the Age:");
	scanf("%d",&i);
	
	if(i>=21)
	{
		printf("Congratulations!You are eligible for casting your vote");
	}
	else 
	{
		printf("You are still young");
	}
	return 0;
}
