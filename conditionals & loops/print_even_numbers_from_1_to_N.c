#include <stdio.h>
int main() {
    int n;
    printf("Enter a range of natural numbers: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Please enter a natural number greater than or equal to 1.\n");
    } 
    else {
        printf("Even numbers from 1 to %d are: ", n);
        for (int i = 2; i <= n; i += 2) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}