#include <stdio.h>
int main() {
    int a=8;
    float b=6.7;
    double c=5.3;
    printf("Size of integer number %u bytes\n",sizeof(a));
    printf("Size of float number %u bytes\n",sizeof(b));
    printf("Size of double number %u bytes\n",sizeof(c));
    return 0;
}