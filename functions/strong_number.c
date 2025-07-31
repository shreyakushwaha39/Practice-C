#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int isStrong(int num) {
    int sum = 0, digit, temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isStrong(n))
        printf("%d is a Strong number.\n", n);
    else
        printf("%d is not a Strong number.\n", n);
    return 0;
}
