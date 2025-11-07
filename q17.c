#include <stdio.h>
#include <math.h>  // for sqrt() function

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    // Input coefficients of the quadratic equation
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    printf("\nThe quadratic equation is: %.1fx² + %.1fx + %.1f = 0\n", a, b, c);

    // Check the nature of the roots
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nRoots are real and distinct.\n");
        printf("Root 1 = %.2f\nRoot 2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        // Two equal real roots
        root1 = root2 = -b / (2 * a);
        printf("\nRoots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else {
        // Complex (imaginary) roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("\nRoots are complex and imaginary.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
