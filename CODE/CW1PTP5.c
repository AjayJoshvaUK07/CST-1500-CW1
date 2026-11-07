#include <stdio.h>
int main()
{
    double num1, num2;
    double *ptr1, *ptr2;
    double sum, difference, product, quotient;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Enter the first number: ");
    scanf("%lf", ptr1);

    printf("Enter the secound number:");
    scanf("%lf", ptr2);
    printf("\nMemory addresses before the calculations:\n");

    printf("Address of first number: %p\n", (void *)ptr1);
    printf("address of second number: %p\n", (void *)ptr2);
    // Perform calculations using poiters
    sum = *ptr1 + *ptr2;
    difference = *ptr1 - *ptr2;
    product = *ptr1 * *ptr2;

    if (*ptr2 !=0)
    {
        quotient = *ptr1 / *ptr2;
        printf("quotient: %.21f\n", quotient);
    }
    else
    {
        printf("quotient: cannot divide by zero. \n");
    }

    printf("Sum: %.21f\n", sum);
    printf("Difference: %.21f\n", difference);
    printf("Product: %.21f\n", product);
    // Display memory addresses after calculations
    printf("\nMemory addresses after calculations:\n");

    printf("Address of first number: %p\n", (void *)ptr1);
    printf("Address of secound number: %p\n", (void *)ptr2);
    return 0;

}