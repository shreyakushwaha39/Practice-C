#include <stdio.h>
int main() {
    int n;
    printf("Enter the range of prime numbers from 1 to n: ");
    scanf("%d",&n);
    int num=2;
    while (num<=n) {
        int i=2;
        int is_Prime=1;
        while (i*i<=num) {
            if (num%i==0){
                is_Prime=0;
                break;
            }
            i+=1;
        }
        if (is_Prime){
            printf("%d ",num);
        }
        num+=1;
    }
    return 0;
}
