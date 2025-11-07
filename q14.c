#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Check whether the character is a vowel or consonant
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ||
        (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
        printf("\n%c is a vowel.\n", ch);
    } 
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("\n%c is a consonant.\n", ch);
    } 
    else {
        printf("\nInvalid input! Please enter an alphabet.\n");
    }

    return 0;
}
