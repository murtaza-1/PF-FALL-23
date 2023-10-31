

#include<stdio.h>
void swap(int a,int b)
{
	int tmp=a;
	a=b;
	b=tmp;
	printf("j=%d, k=%d\n",a,b);

	
}
int main()
{
	int j=2, k=5;
	printf("j=%d, k=%d\n",j,k);
	swap(j,k);	
	return 0;
}
//swapping was done incorrectly and the function was supposed to return nothing so no change was not shown in the main function
