#include <stdio.h>
#include <string.h>

// Function declarations
void printName(int X);
void passwordEntry(char userName[]);

int main()
{
    int X;
    printf("Enter a whole number:");
    scanf("%d", &X);

    printName(X);
    passwordEntry("Ajay");
    return 0;
}
// Function to print the name X times
void printName(int X)
{
    char name[] = "Ajay";
    for (int i = 1; i <=X; i++)
    {
        printf("%s\n", name);
    }
}
// Function to check the password
void passwordEntry(char username[])
{
    char password[20];
    int attempts = 0;
    while (attempts < 3)
    {
        printf("Enter password:");
        scanf("%19s", password);
        attempts++;
        
        if (strcmp(password, "1234") ==0)
    {
     printf("Welcome %s! password is correct.\n", username);
     return;
    }
    else
    {
      printf("Incorrect password. Try again.\n");
    }
}
printf("Too many incorrect attempts. Access denied.\n");
}
