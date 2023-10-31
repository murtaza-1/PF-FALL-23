
#include<stdio.h>
#include<stdlib.h>

main() {
int n;
printf("enter the size of the arrays");
scanf("%d",&n);

int i;
//initializing the arrays
char a[n];
int b[n];
long long int c[n];

for ( i = 0; i < n; i++) {
        a[i]=rand()%128;
        b[i]=rand();
        c[i]=rand()*rand();
    }
   
printf("\nAddresses and values in charArray:\n");
    for ( i = 0; i < n; i++) {
        printf("Address: %p, Value: %c\n", (void*)&a[i], a[i]);
    }
   
    printf("\nAddresses and values in intArray:\n");
    for ( i = 0; i < n; i++) {
        printf("Address: %p, Value: %d\n", (void*)&b[i], b[i]);
    }

    printf("\nAddresses and values in longLongIntArray:\n");
    for ( i = 0; i < n; i++) {
        printf("Address: %p, Value: %lld\n", (void*)&c[i], c[i]);
    }
}
