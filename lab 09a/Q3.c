#include<stdio.h>
#include<stdlib.h>

main() {
int n;
printf("enter the size of all the arrays");
scanf("%d",&n);

int i;
//initializing the arrays
char arr1[n];
int arr2[n];
long long int arr3[n];

//populating the array
for ( i = 0; i < n; i++) {
        arr1[i]=rand()%128;
    }

for ( i = 0; i < n; i++) {
        arr2[i]=rand();
    }

for ( i = 0; i < n; i++) {
        arr3[i]=rand()*rand();
    }
   
    //printing the addresses and values
printf("\nAddresses and values in charArray:\n");
char *num;
    for ( i = 0; i < n; i++) {
        printf("Address: %p, Value: %c\n", (arr1+i), *(arr1+i));
    }
   
    printf("\nAddresses and values in intArray:\n");
    for ( i = 0; i < n; i++) {
        printf("Address: %p, Value: %d\n", arr2+i, *(arr2+i));
    }

    printf("\nAddresses and values in longLongIntArray:\n");
    for ( i = 0; i < n; i++) {
        printf("Address: %p, Value: %lld\n", arr3+i, *arr3+i);
    }
}
