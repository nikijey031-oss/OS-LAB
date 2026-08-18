#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("ENTER TWO NUMBERS: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\nENTER YOUR CHOICE: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Result = %d\n", a + b);
            break;

        case 2:
            printf("Result = %d\n", a - b);
            break;

        case 3:
            printf("Result = %d\n", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Cannot divide by zero\n");
            break;

        default:
            printf("Invalid Option\n");
    }

    return 0;
}
