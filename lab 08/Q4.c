#include <stdio.h>
#include <string.h>

main() {
//an array to store password
    char password[100];
    char correctpassword[]="correctanswer";
   
    //enter the password
    printf("Enter the password: ");
    fgets(password, sizeof(password), stdin);
   
    if(strlen(password)>=8) {
    if(strcmp(password,correctpassword)==0) {
    printf("correct password login successfully");
} else {
printf("incorrect password login failed");
}
} else {
printf("the length is incorrect");
}
   
