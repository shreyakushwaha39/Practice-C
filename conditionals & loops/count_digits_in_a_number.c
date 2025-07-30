#include <stdio.h>
int main() {
    int n, count=0;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a natural number greater than or equal to 0.\n");
    } 
    else {
        while (n != 0) {
            n /= 10; 
            count++; 
        }
        printf("Number of digits: %d\n", count);
    }
    return 0;
}