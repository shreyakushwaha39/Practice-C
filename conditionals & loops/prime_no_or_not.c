#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int is_Prime=1;
    if (n<2) {
        is_Prime=0;
    }
    else{
        int i=2;
        while (i*i<=n){
            if (n%i==0){
                is_Prime=0;
                break;
            }
            i+=1;
        }
    } 
    if (is_Prime){
        printf("Prime number");
    }
    else{
        printf("Not a Prime number");
     }
     return 0;
}