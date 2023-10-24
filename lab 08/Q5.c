#include <stdio.h>

//defining the function
int decideCarUsage(int carNumber, int dayOfWeek) {
if(dayOfWeek%2==0) {
if(carNumber%2==0) {
return 1;
}else {
return 0;
   }
} else {
if(carNumber%2==1) {
return 1;
}else {
return 0;
}
}
}

int main() {
    int carNumber, dayOfWeek;
   
    printf("Enter the numeric part of your car's number: ");
    scanf("%d", &carNumber);
   
    printf("Enter the day of the week (1 to 7): ");
    scanf("%d", &dayOfWeek);
   
    //conditions to check valid input
    if (carNumber >= 0 && dayOfWeek >= 1 && dayOfWeek <= 7) {
        int shouldUseCar = decideCarUsage(carNumber, dayOfWeek);
        if (shouldUseCar==1) {
            printf("You should use your car today.\n");
        } else {
            printf("You should not use your car today.\n");
        }
    } else {
        printf("Invalid input. Please enter a valid car number and day of the week.\n");
    }

    return 0;
}
