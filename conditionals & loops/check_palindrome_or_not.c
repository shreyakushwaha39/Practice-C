#include <stdio.h>
int main() {
    int num, rev = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int is_Palindrome=0;
    while (num != 0) {
        rem = num % 10; 
        rev = rev * 10 + rem; 
        num /= 10;
        is_Palindrome = 1;
    }
    if (is_Palindrome && rev == num) {
        printf("Palindrome Number");
    }
    else {
        printf("Not a palindrome number");
    }
    return 0;
}