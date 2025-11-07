#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check the number using nested if–else
    if (num >= 0) {
        if (num == 0)
            printf("\nThe number is zero.\n");
        else
            printf("\nThe number is positive.\n");
    } else {
        printf("\nThe number is negative.\n");
    }

    return 0;
}
