#include <stdio.h>
int main() {
    int n;
    printf("Enter a natural number N: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Please enter a natural number greater than or equal to 1.\n");
    } else {
        printf("Odd numbers from 1 to %d are:\n", n);
        for (int i = 1; i <= n; i += 2) {
            printf("%d ", i);
        }
    }  
    return 0;
}