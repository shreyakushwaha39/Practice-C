#include <stdio.h>
int main() {
    int a=10,b=20,c=30;
    int max=a;
    if (max<b){
        max=b;
    }
    if (max<c){
        max=c;
    }
    printf("%d is the largest number",max);
    return 0;
}