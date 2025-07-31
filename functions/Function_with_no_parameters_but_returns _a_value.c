#include <stdio.h>
int getNumber() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    return x;
}
int main() {
    int num = getNumber();
    printf("You entered: %d\n", num);
    return 0;
}
