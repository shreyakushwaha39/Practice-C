#include <stdio.h>
#include <math.h>
int main() {
    int i,sum,num;
    printf("Armstrong numbers between 1 and 1000 are:\n");
    for (int i=1;i<=1000;i++) {
        num = i;
        if (num < 10) {
            printf("%d ", num);
        }
        else {
            sum = pow(num%10,3)+pow((num%100-num%10)/10,3)+pow((num%1000-num%100)/100,3);
            if (sum==num) {
                printf("%d ", num);
            }
        }
    }
    printf("\n");
    return 0;
}