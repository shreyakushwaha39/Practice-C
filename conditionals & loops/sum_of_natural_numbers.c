#include <stdio.h>
int main() {
    int n;
    int sum=0;
    printf("Enter the numbers in a given range: ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        sum+=i;
        i+=1;
    }
    printf("Sum of natural numbers: %d",sum);
    return 0;
}