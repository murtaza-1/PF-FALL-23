#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
    //base case
        return n;
    } else {
    //recurive case
        return (fib(n - 1) + fib(n - 2));
    }
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("fib Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}

