#include <stdio.h>

int main() {
    float percentage;

    // Input percentage
    printf("Enter your percentage (0-100): ");
    scanf("%f", &percentage);

    // Validate and assign grade
    if (percentage < 0 || percentage > 100) {
        printf("\nInvalid input! Percentage should be between 0 and 100.\n");
    } 
    else if (percentage >= 90)
        printf("\nGrade: A\n");
    else if (percentage >= 80)
        printf("\nGrade: B\n");
    else if (percentage >= 70)
        printf("\nGrade: C\n");
    else if (percentage >= 60)
        printf("\nGrade: D\n");
    else
        printf("\nGrade: F\n");

    return 0;
}
