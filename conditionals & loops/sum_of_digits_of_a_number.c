#include <stdio.h>
int main() {
    int n, sum=0;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a natural number greater than or equal to 0.\n");
    } 
    else {
        while (n != 0) {
            sum += n % 10; 
            n /= 10;      
        }
        printf("Sum of digits: %d\n", sum);
    }
    return 0;
}