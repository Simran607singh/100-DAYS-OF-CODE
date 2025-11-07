#include <stdio.h>

int main() {
    int year;

    // Input year from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check leap year condition
    if (year % 400 == 0)
        printf("\n%d is a leap year.\n", year);
    else if (year % 100 == 0)
        printf("\n%d is not a leap year.\n", year);
    else if (year % 4 == 0)
        printf("\n%d is a leap year.\n", year);
    else
        printf("\n%d is not a leap year.\n", year);

    return 0;
}
