#include <stdio.h>
int hcf(int a, int b) {
    int hcf;
    for (int i=1; i<=a && i<=b; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    return hcf;
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int result = hcf(a, b);
    printf("HCF of %d and %d is %d\n", a, b, result);
    return 0;
}