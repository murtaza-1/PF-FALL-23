/*
*Programmer: Murtaza Jafri
*Desc: Div without op
/*
#include<stdio.h>
 
 main()
{
	int a,x,y;
	printf("enter number 1:");
	scanf("%d",&x);
	printf("enter number 2:");
	scanf("%d",&y);
    a=1;
  if(x==0 || y==0)
  printf("\nerror");
   while(x>y)
   {
   	x=x-y;
   	a++;
   }
  }
