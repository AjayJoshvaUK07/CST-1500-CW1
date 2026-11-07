#include <stdio.h>
int main()
{
    // Declare a variable to store the exam score
    int score;
    // Countinue until the user enters -1
    while(1)
    {
        printf("Enter exam score (-1 to stop): ");
        scanf("%d", &score);

        if (score == -1)
        {
            break;
        }
    
    // Check the exam score classification
    if (score >=0 && score <=39)
    {
        printf("Your exam score is %d which is a FAIL.\n", score);
    }
    else if (score >=40 && score <=49)
    {
        printf("Your exam score is %d which is a THIRD.\n", score);
    }
    else if (score >=50 && score <=59)
    {
        printf("Your exam score is %d which is a LOWER SECOND.\n", score);
    }
    else if (score >=60 && score <=69)
    {
        printf("Your exam score is %d which is a UPPER SECOND.\n", score);
    }
    else if (score >=70 && score <=100)
    {
        printf("Your exam score is %d which is a FIRST.\n", score);
    }
    else
    {
        printf("Invalid score. Please enter a score between 0 and 100.\n");
    }
    }
    return 0;
}