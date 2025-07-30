#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp=n;
    while (temp!=0) {
        temp=temp/10;
        n++;
    }
    
    int originalnum=n;
    int sum=0;
    while (temp!=0) {
        int d = temp%10;
        sum+=pow(d,n);
        temp=temp/10;
    }
    if (sum==originalnum) {
        printf("%d is an armstrong number",originalnum);
    }
    else {
        printf("%d is not an armstrong number",originalnum);
    }
    return 0;
}