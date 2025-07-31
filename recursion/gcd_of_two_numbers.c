#include <stdio.h>
int gcd(int a, int b) {
    if (b==0){
        return a;
    }
    else{
         return gcd(b, a%b);
    }
}
int main() {
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    int result=gcd(a,b);
    printf("GCD Or HCF: %d",result);
    return 0;
}