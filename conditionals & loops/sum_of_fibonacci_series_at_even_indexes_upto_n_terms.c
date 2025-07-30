#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int f1 = 0, f2 = 1, f3 = 0;
    int sum = 0;
    int i = 0;

    while (i < n) {
        if (i == 0) {
            f3 = 0;
        } else if (i == 1) {
            f3 = 1;
        } else {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }

        if (i % 2 == 0) {
            sum += f3;
        }
        i++;
    }

    printf("Sum of Fibonacci numbers at even indexes upto %d terms: %d\n", n, sum);
    return 0;
}
