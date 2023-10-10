/*
  *programmer: Murtaza Jafri
  *desc: Rotation
  /*


#include <stdio.h>

int main() {
    int N, d;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d elements for the array:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &d);

    d = d % N;

    int temp;

    for (int i = 0; i < d; i++) {
        temp = arr[0];

        for (int j = 0; j < N - 1; j++) {
            arr[j] = arr[j + 1];
        }

       
        arr[N - 1] = temp;
    }

    printf("Rotated array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

