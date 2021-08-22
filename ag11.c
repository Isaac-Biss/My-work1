#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, root1, root2, D;
	printf("Enter the values:");
	scanf("%f%f%f",&a,&b,&c);
	
	D=sqrt(b*b-(4*c*a));
	root1= (-b+D)/(2*a);
	root2= (-b-D)/(2*a);
	if(D>=0)
	{
		printf("The roots of the equation are %f and %f",root1,root2);
	}
	else
	{
		printf("Roots are imaginary;\nNo solution");
	}
	return 0;
}
