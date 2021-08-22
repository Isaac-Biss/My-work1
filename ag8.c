#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(b>c)
		{
			printf("1stNumber=%d\n2ndNumber=%d\n3rdNumber=%d",a,b,c);
		}
		else
		{
			printf("1stNumber=%d\n2ndNumber=%d\n3rdNumber=%d",a,c,b);
		}
	}
	else if(b>a)
	{
		if(a>c)
		{
			printf("1stNumber=%d\n2ndNumber=%d\n3rdNumber=%d",b,a,c);
		}
		else
		{
			printf("1stNumber=%d\n2ndNumber=%d\n3rdNumber=%d",b,c,a);
		}	
	}
	else if(a==b||b==c||a==c)
	{
		printf("Some number are equal try again");
	}
	else
	{
		if(a>b)
		{
			printf("1stNumber=%d\n2ndNumber=%d\n3rdNumber=%d",c,a,b);
		}
		else
		{
			printf("1stNumber=%d\n2ndNumber=%d\n3rdNumber=%d",c,b,a);
		}		
	}
	return 0;
}
