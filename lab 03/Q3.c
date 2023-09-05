#include<stdio.h>
#include<math.h>
main()
{
  int l;
  int b;
  int h;
  int a;
  printf("enter lenght\n");
  scanf("%d",&l);
 printf("enter breath\n");
 scanf("%d",&b);
  a=l*l+b*b;
  h=sqrt(a);
 printf("%d",h);
}
