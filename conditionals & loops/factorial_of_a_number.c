#include <stdio.h>
int main() {
    int n=5;
    int fac=1;
    int i=1;
    while(i<=n){
        fac *=i;
        i++;
    }
    printf("Factorial of a %d is %d",n,fac);
    return 0;
}