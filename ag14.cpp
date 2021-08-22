#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the angles:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a+b+c!=180)
	{
		printf("The triangle is not vaild.");
	}
		else if(a==b&&c==b&&a==c)
	{
		printf("This is an Equilateral triangle.");		
	}
	else if(a==b||c==b||a==c)
	{
		printf("This is an isosceles triangle.");		
	}
	else if(a==90||c==90||a==90)
	{
		printf("This is a Right angled triangle.");		
	}
	else
	{
		printf("This is a scalene triangle.");
	}
	return 0;
}
