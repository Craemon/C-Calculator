#include <stdio.h>

int main(void)
{
    int number1;
    int number2;

    //ask and save number input

    printf("Choose your first number:\n");
    scanf("%d",&number1);

    printf("Choose your second number:\n");
    scanf("%d",&number2);

    //ask for operation to execute

    printf("Choose your operation:\n");
    char operation[3];
    scanf("%s", operation);

    if (operation == "add")
    {
        int result = number1 + number2;
        printf("Your result is:\n");
        printf("%i", result);
        return result;
    }
    else if (operation == "subtract")
    {
        int result = number1 - number2;
    };

    printf("Your result is:\n");
    printf("%i", result);
    return 0;
}