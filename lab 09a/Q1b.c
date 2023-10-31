#include<stdio.h>
#include<stdlib.h>
  
 int fact(int x) 
  {
  if(x==1 || x==0)
  {return 1;
  }
  return x*fact(x-1);
}
main()
{
	int a;
	printf("Enter number you want to find factorial of?");
	scanf("%d",&a);
	long y=fact(a);
	printf("The factorial is %d",y);
}
