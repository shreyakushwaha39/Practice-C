#include <stdio.h>

int power(int n, int p) {
    long long power=1;
    for (int i=0;i<p;i++) {
        power = power * n;
    }
    return power;
}
int main() {
    int n, p;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a power: ");
    scanf("%d", &p);
    int result = power(n,p);
    printf("%d", result);
    return 0;
}