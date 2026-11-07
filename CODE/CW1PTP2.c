#include <stdio.h>
int main()
{
    // Declare variables
    char name[50];
    int number1, number2;
    // Get the user's name
    printf("Enter your name:");
    scanf("%49s", name);
    // Get two numbers from the user
    printf("Enter the first number:");
    scanf("%d", &number1);

    printf("Enter the secound number:");
    scanf("%d", &number2);
    // Display the calculation results
    printf("%s has entered %d and %d. %d + %d equals %d.\n",name, number1, number2, number1, number2, number1 + number2);
    printf("%s has entered %d and %d. %d - %d equals %d.\n",name, number1, number2, number1, number2, number1 - number2);
    printf("%s has entered %d and %d. %d * %d equals %d.\n",name, number1, number2, number1, number2, number1 * number2);
    // Display division result
    if (number2 !=0)
    {
        printf("%s has entered %d and %d. %d / %d equals %.2f.\n",name, number1, number2, number1, number2,(float)number1 / number2);
    }
    else
    {
        printf("%s, division by zero is not possible,\n", name);
    }
    return 0;
}