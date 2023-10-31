
#include<stdio.h>
int multiply(int x, int y)
{
if(y == 0)
	return 0;

/* Add x one by one */
if(y > 0 )
	return (x + multiply(x, y-1));

/* the case where y is negative */
if(y < 0 )
	return -multiply(x, -y);
}

int main()
{
	int a,b;
printf("Enter 2 numbers");
scanf("%d%d",&a,&b);
printf("\n %d", multiply(a, b));
return 0;
}

