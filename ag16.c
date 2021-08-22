#include<stdio.h>

float TileArea(float base, int height)
{
	return 0.5* base* height;
}

float RoomArea(float length, float width)
{
	return length * width;
}


int main()
{
	float b, h, l, w;
	int i, no_of_tiles, n, sum=0;
	
	printf("Enter the number of rooms:");
	scanf("%d",&n);
	
	printf("Enter the base and height of tile:");
	scanf("%f%f",&b,&h);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter the length and width of room%d:",i);
		scanf("%f%f",&l,&w);
		
		int no_of_tile= (int)(RoomArea(l,w)/TileArea(b,h));
		
		printf("The number of tiles required for the room%d is %d\n\n",i ,no_of_tiles);
		
		sum+= no_of_tiles;
	}
	printf("The total number of tiles required for whole house is %d",sum);
	return 0;
}
