#include <stdio.h>

int main() {
    int choice;

    printf("ASCII Demonstration Program\n");
    printf("1. Print ASCII Table (0 to 127)\n");
    printf("2. Character to ASCII Value\n");
    printf("3. ASCII Value to Character\n");
    printf("4. Uppercase to Lowercase\n");
    printf("5. Lowercase to Uppercase\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Print ASCII table
        for (int i = 0; i < 128; i++) {
            printf("%3d = %c\n", i, i);
        }
    }
    else if (choice == 2) {
        // Character to ASCII
        char c;
        printf("Enter a character: ");
        scanf(" %c", &c);  // space before %c to skip newline
        printf("Character = %c\n", c);
        printf("ASCII value = %d\n", c);
    }
    else if (choice == 3) {
        // ASCII to Character
        int x;
        printf("Enter an ASCII value (0 to 127): ");
        scanf("%d", &x);
        printf("ASCII value = %d\n", x);
        printf("Character = %c\n", x);
    }
    else if (choice == 4) {
        // Uppercase to Lowercase
        char c;
        printf("Enter an uppercase character: ");
        scanf(" %c", &c);

        if (c >= 'A' && c <= 'Z') {
            char lower = c + 32;
            printf("Lowercase = %c\n", lower);
        } else {
            printf("Not an uppercase letter!\n");
        }
    }
    else if (choice == 5) {
        // Lowercase to Uppercase
        char c;
        printf("Enter a lowercase character: ");
        scanf(" %c", &c);

        if (c >= 'a' && c <= 'z') {
            char upper = c - 32;
            printf("Uppercase = %c\n", upper);
        } else {
            printf("Not a lowercase letter!\n");
        }
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
