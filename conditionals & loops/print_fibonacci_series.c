#include <stdio.h>
int main() {
    int f1=0;
    int f2=1;
    int f3=f1+f2;
    int n;
    printf("Enter a given range: ");
    scanf("%d",&n);
    printf("%d %d ",f1,f2);
    int i=3;
    while (i<=n){
        f3=f1+f2;
        printf("%d ",f3);
        f1=f2;
        f2=f3;
        i++;
    }
    return 0;
}