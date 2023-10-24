Q2

#include<stdio.h>

void calc(int x, int y, char z);
void calc(int x, int y, char z)
{   
    switch(z)
    {
      case '+':
     printf("%d",x+y);
     break;
	case '-':
	printf("%d",x-y);
	break;
	case '*':
	printf("%d",x*y);
	break;
	case '/':
	printf("%d",x/y);
	break;
	deFult:
	printf("error");	
	}
}main()
{
	char c;
	int a,b;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	printf("which function do you want to perform");
	fflush(stdin);
	scanf("%c",&c);
calc(a,b,c);
	
} 
