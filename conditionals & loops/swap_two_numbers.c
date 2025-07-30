#include <stdio.h>
int main() {
    int temp,a,b;
    printf("Before swapping\n");
    printf("Enter a two numbers: ");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping\n");
    printf("The two numbers will be %d %d",a,b);
    return 0;
}