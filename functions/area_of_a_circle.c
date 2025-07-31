#include <stdio.h>
#define PI 3.14
float area(float r) {
    return PI * r * r;
}

int main() {
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    float result = area(r);
    printf("Area of the circle = %.2f\n", result);
    return 0;   
}