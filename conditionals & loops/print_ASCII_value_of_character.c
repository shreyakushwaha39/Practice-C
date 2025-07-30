#include <stdio.h>
int main() {
    char ch;
    ch=printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII value of a %c is %d",ch,ch);
    return 0;
}