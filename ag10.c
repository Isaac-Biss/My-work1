#include<stdio.h>
int main()
{
	int Math, Phy, Chem, TotalA, TotalB;
	printf("Enter marks for Math:");
	scanf("%d",&Math);
	
	printf("Enter marks for Physics:");
	scanf("%d",&Phy);
	
	printf("Enter marks for Chemistry:");
	scanf("%d",&Chem);
	
	TotalA=Phy+Math;
	TotalB=Math+Phy+Chem;
	
	printf("Total in all the subjects is %d\n",TotalB);
	printf("Total in Math and Physics is %d\n",TotalA);
	
	
	if(Math<65||Phy<55||Chem<50)
	{
		printf("The candidate is not eligible for admission");
	}
	else if(TotalA<140||TotalB<190)
	{
		printf("The candidate is not eligible for admission");	
	}
	else
	{
		printf("The candidate is eligible for admission");
	}

	
	return 0;
}
