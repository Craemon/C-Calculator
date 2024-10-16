#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char operation;
    int numb1, numb2;
    float result;

    //ask for operation to execute

    printf("Choose your operation(+, -, *, /):");
    scanf("%c", &operation);

    switch (operation)
    {
        //case: addition
        case '+':
            printf("Enter two numbers: ");
            scanf("%d%d", &numb1, &numb2);
            result = numb1 + numb2;
            printf("The sum is: %f\n", result);
            break;

        //case: subtraction
        case '-':
            printf("Enter two numbers: ");
            scanf("%d%d", &numb1, &numb2);
            result = numb1 - numb2;
            printf("The difference is: %f\n", result);
            break;

        //case: multiplication
        case '*':
            printf("Enter two numbers: ");
            scanf("%d%d", &numb1, &numb2);
            result = numb1 * numb2;
            printf("The product is: %f\n", result);
            break;

        //case division
        case '/':
            printf("Enter two numbers: ");
            scanf("%d%d", &numb1, &numb2);
            if (numb2 == 0)
            {
                printf("Divide by 0 Error\n");
                break;
            }
            result = numb1 / numb2;
            printf("The quotient is: %f\n", result);
            break;
    }
    return 0;
}
