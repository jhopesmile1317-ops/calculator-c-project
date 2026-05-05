#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    printf("===== SIMPLE CALCULATOR =====\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if(choice == 1)
    {
        printf("Result = %.2f\n", a + b);
    }
    else if(choice == 2)
    {
        printf("Result = %.2f\n", a - b);
    }
    else if(choice == 3)
    {
        printf("Result = %.2f\n", a * b);
    }
    else if(choice == 4)
    {
        if(b != 0)
            printf("Result = %.2f\n", a / b);
        else
            printf("Error: Division by zero not allowed\n");
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}
