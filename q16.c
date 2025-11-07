#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check which number is the largest
    if (a >= b && a >= c)
        printf("\n%d is the largest number.\n", a);
    else if (b >= a && b >= c)
        printf("\n%d is the largest number.\n", b);
    else
        printf("\n%d is the largest number.\n", c);

    return 0;
}
