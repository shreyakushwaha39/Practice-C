#include <stdio.h>
int main() {
    float f,c;
    printf("Enter in fahreinheit: ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("In celsius %f",c);
    return 0;
}