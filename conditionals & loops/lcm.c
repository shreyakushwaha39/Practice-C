#include <stdio.h>
int main() {
    int a;
    int b;
    printf("Enter two numbers: %d %d",a,b);
    int x=a;
    int y=b;
    while (y){
        x = y;
        y = x%y;
    }
    int gcd = x;
    int lcm = (a*b)/gcd;
    printf("LCM of {%d} and {%d} is {%d}",a,b,lcm);
    return 0;
}