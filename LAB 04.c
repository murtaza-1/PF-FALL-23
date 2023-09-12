
lab 04;
#include<stdio.h>
q1
main()
{
	int n,i=1;
	printf("enter a number");
	scanf("%d",&n);
    while(i<=n){
	int j=1;
	while(j<=i){
		printf("*");
		j++;
	}
	printf("\n");
    i++;
	}
}

q2
#include<stdio.h>

main()
{
	int n,i=1;
	printf("enter a number");
	scanf("%d",&n);
    while(i<=n){
	int j=1;
	while(j<=n){
		printf("*");
		j++;
	}
	printf("\n");
    i++;
	}
}
q3
#include<math.h>
#include<stdio.h>
main()
{
	int sum,n,a,i=0;
	printf("enter a number");
	scanf("%d",&n);
    sum=0;
	while(n>i)
	{
	printf("enter a number\n");
    scanf("%d",&a);
    int b=pow(a,2);
    sum=sum+b;
	i++;
    }
	printf("%d",sum);
}
q4
#include<math.h>
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	printf("enter c");
	scanf("%d",&c);
  int i=(b*b)-(4*a*c);
   float f=sqrt(i);
 float x=(-b+f)/(2*a);
  float y=(-b-f)/(2*a);
printf("2 answers are x1:%f and x2:%f",x,y);

   
}
q5
#include <stdio.h>
 main() {
    int day1, month1, year1;
    int day2, month2, year2;
    printf("Enter the date and month and year of person 1 ");
    scanf("%d%d%d", &day1,&month1,&year1);
    printf("Enter the date and month and year of person 2 ");
    scanf("%d%d%d", &day2, &month2, &year2);
    while (year1 == year2) {
        while (month1 == month2) {
            while (day1 == day2) {
                printf("Same DOB\n");  
            }
            if (day1 < day2) {
                printf("Person 1 is older.\n");
            } else {
                printf("Person 2 is older.\n");
                    }
        }
        if (month1 < month2) {
            printf("Person 1 is older.\n");
        } else {
            printf("Person 2 is older.\n");
       }
    }

    if (year1 < year2) {
        printf("Person 1 is older.\n");
    } else {
        printf("Person 2 is older.\n");
    }
}
q6
#include <stdio.h>
 main()
{

int n, r = 1, c;
        printf("Enter number of rows");
        scanf("%d", &n);
        if(n%2 == 0){
            n=n-1;
          }
while (r <= n) {
c=n;

while (c > r) {
printf(" ");
c--;
}

printf("*");
c = 1;
while (c < (r - 1) * 2) {
printf(" ");
c++;
}
if (r == 1) {
printf("\n");
}
else {
printf("*\n");
}
r++;
}

r = n - 1;
while (r >= 1) {
c = n;

while (c > r) {
printf(" ");
c--;
}

printf("*");
c = 1;
while (c < (r - 1) * 2) {
printf(" ");
c++;
}
if (r == 1) {
printf("\n");
}
else {
printf("*\n");
}
r--;
}
}

