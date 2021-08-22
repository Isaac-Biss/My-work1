#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("The number%d is Even",a);
	}
	else
	{
		printf("The number%d is Odd",a);
	}
	return 0;
}
