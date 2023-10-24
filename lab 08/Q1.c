
Q1

#include<stdio.h>
void swapinteger(int x, int y);

void swapinteger(int x, int y)
{   
    int t;
	t=x;
	x=y;
	y=t;
	printf("swapped values are %d and %d",x,y);
}main()
{
	int a,b;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
swapinteger(a,b);
	
} 
