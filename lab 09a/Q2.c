#include <stdio.h>

void reverse(int *arr, int size) {
//storing s location
int *s = arr;
    int *a = arr + size - 1;
   
    while (s < a) {
        // Swapping elements using pointers
        int temp = *s;
        *s = *a;
        *a = temp;

        s=s+1;
        a=a-1;
    }
}

int main() {
int i,n=10;
int arr[n];

//populating array
for(i=0;i<10;i++) {
printf("enter array value %d: ",i+1);
scanf("%d",&arr[i]);
printf("\n");
}
//calling function
reverse(arr,n);

printf("reversed string:\n");
for(i=0;i<10;i++) {
printf("array value %d:%d/n",i+1,arr[i]);
}

}
