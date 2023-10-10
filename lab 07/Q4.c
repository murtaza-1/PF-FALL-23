/*
*Programmer: Murtaza Jafri
*Desc: symmetric unsymmetric
/*
  #include <stdio.h>

int main() {
    int x, y,flag;
    printf("Enter the size of the array x and y: ");
    scanf("%d%d", &x,&y);

    int arr[100][100];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
        scanf("%d", &arr[i][j]);
    }}

  for (int i = 0; i < x; i++) {
  for (int j = 0; j < y; j++) 
		{
       if (arr[i][j]==arr[j][i])
       {
        flag=0;
       	
	   }
	   else
       	flag=1;
       	
	       }}

if(flag=0)
printf("symmetric");
else
printf("unsymmetric");
}
