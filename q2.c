#include<stdio.h>

int main()
{
    int sum, a, b, difference, product, quotient;
    printf("enter your number ");
    scanf("%d", &a);
    printf("enter your number ");
    scanf("%d", &b);
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;
printf("sum = %d\n  product = %d\n difference = %d\n  quotient = %d ", sum , product , difference , quotient );
    return 0;
}