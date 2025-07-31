#include <stdio.h>
#include <math.h>
int isArmstrong(int n) {
    int original = n, sum = 0, digit;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    return sum == original;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}
