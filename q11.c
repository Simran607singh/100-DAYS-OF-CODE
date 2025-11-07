#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is even or odd
    if (num % 2 == 0)
        printf("\n%d is an even number.\n", num);
    else
        printf("\n%d is an odd number.\n", num);

    return 0;
}
