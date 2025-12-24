#include <stdio.h>
#include <conio.h>

int main() {
    int choice;
    float num1, num2;

        // Input numbers
        printf("Enter First numbers: ");
        scanf("%f", &num1);
        printf("\n Enter Second numbers: ");
        scanf("%f", &num2);


    do {
        // Display menu
        printf("\n===== Simple Calculator =====\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // Exit condition
        if (choice == 5) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        // Perform operation
        switch (choice) {
            case 1:
                printf("Result: %.2f\n", num1 + num2);
                break;

            case 2:
                printf("Result: %.2f\n", num1 - num2);
                break;

            case 3:
                printf("Result: %.2f\n", num1 * num2);
                break;

            case 4:
                if (num2 != 0)
                    printf("Result: %.2f\n", num1 / num2);
                else
                    printf("Error! Division by zero.\n");
                break;

            default:
                printf("Invalid choice! Please select 1-5.\n");
        }

    } while (1);  // Infinite loop until Exit is chosen

    return 0;
}
