/*
*Programmer: Murtaza Jafri
*Desc: SUM of integers
/*
#include<stdio.h>
int main() {
	
	int a,x;
	int sum=0;
	printf("enter a number\n");
	scanf("%d",&a);
    while(a!=0)
    {
     x=a%10;
     a=a/10;
     sum=sum+x;
	}
  printf("sum is:%d",sum);
  
    return 0;
}
