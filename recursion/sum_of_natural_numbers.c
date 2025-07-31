#include <stdio.h>
int recSum(int n) {
    if (n<=0) {
        return 0;
    }
    else {
        return n + recSum(n-1);
    }
}
int main() {
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a natural number. \n");
    }
    else {
        int sum = recSum(n);
        printf("Sum of first %d natural numbers is: %d\n", n, sum);
    }
    return 0;
}