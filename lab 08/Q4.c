Q4

#include <stdio.h>
#include <string.h>
 
int main(void)
{
  char a[100] ;
  char * ptr;
  int ch;
  int count;
  printf("enter string");
  gets(a);
  printf("enter letter to search");
  scanf("%c",&ch);
 
  ptr = strchr( a, ch );
  printf( "The first occurrence of %c in '%s' is '%s'\n",
            ch, a, ptr );
 
 while(ptr!=NULL)
 {
 	count++;
 	ptr=strchr(ptr+1,ch);
 }
 printf("%d",count);
}
 
