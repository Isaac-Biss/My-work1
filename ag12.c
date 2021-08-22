#include<stdio.h>
int main()
{
	int a, b, c, Total;
	float Percentage;
	char Name[15];
	printf("Name of the student:");
	scanf("%s",&Name);
	
	printf("Enter the PHY, Chem and Computer marks:");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("Marks in Physics:%d\n",a);
	printf("Marks in Chemistry:%d\n",b);
	printf("Marks in Computer Aplication:%d\n",c);
	
	Total=a+b+c;
	Percentage=(float)Total/3;
	
	printf("Total Marks=%d\n",Total);
	printf("Percentage=%.3f\n",Percentage);
	
	if(Percentage>=80)
	{
		printf("Division:First");
	}
	else if(Percentage<80&&Percentage>=75)
	{
		printf("Division:Second");
	}
	else if(Percentage<75&&Percentage>=70)
	{
		printf("Division:Third");
	}
	else if(Percentage<70&&Percentage>=65)
	{
		printf("Division:Fourth");
	}
	else if(Percentage<65&&Percentage>=55)
	{
		printf("Division:Fifth");
	}
	else if(Percentage<55&&Percentage>=45)
	{
		printf("Division:Sixth");
	}
	else if(Percentage<45&&Percentage>=35)
	{
		printf("Division:Seventh");
	}
	else
	{
		printf("Division:Ungraded");	
	}
	return 0;
}
