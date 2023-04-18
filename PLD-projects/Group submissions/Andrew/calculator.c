#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main()
{
    int n;
    printf("Contents\nFor Addition press 0\nFor Subtraction press 1\nFor Multiplication press 2\nFor Division press 3\n");
    scanf("%d", &n);

//ADDITION BLOCK 
    if (n == 0)
    {
        int a, b;
        char answer;
        // int change;
        printf("Enter the first number to add: ");
        scanf("%d", &a);
        printf("You have entered %d, would you like to change it?(Enter Y or N)", a);
        scanf("%s", &answer);

        while (answer == 'Y')
        {
            printf("Enter the first number to add: ");
            scanf("%d", &a);
            break;
        }

        printf("Enter the Second number to add: ");
        scanf("%d", &b);
        printf("You have entered %d, would you like to change it?(Enter Y or N)", b);
        scanf("%s", &answer);

        while (answer == 'Y')
        {
            printf("Enter the second number to add: ");
            scanf("%d", &b);
            break;
        }

         add(a,b);
    } 
    else if (n == 1) //Subtraction block
    {
        int a, b;
        char answer;
        printf("Enter the number to subtract from: ");
        scanf("%d", &a);
        printf("You have entered %d, would you like to change it?(Enter Y or N)", a);
        scanf("%s", &answer);

        while (answer == 'Y')
        {
            printf("Enter the number to subtract from: ");
            scanf("%d", &a);
            break;
        }

        printf("Enter the number to subtract: ");
        scanf("%d", &b);
        printf("You have entered %d, would you like to change it?(Enter Y or N)", b);
        scanf("%s", &answer);

        while (answer == 'Y')
        {
            printf("Enter the number to subtract: ");
            scanf("%d", &b);
            break;
        }
        subtract(a,b);
    }
    else if (n == 2) //multiplication block
    {
        int a, b;
        char answer;
        printf("Enter the first number to multiply: ");
        scanf("%d", &a);
        printf("You have entered %d, would you like to change it?(Enter Y or N)", a);
        scanf("%s", &answer);

        while (answer == 'Y')
        {
            printf("Enter the first number to multiply: ");
            scanf("%d", &a);
            break;
        }

        printf("Enter the number to multiply by: ");
        scanf("%d", &b);
        printf("You have entered %d, would you like to change it?(Enter Y or N)", b);
        scanf("%s", &answer);

        while (answer == 'Y')
        {
            printf("Enter the number to multiply by: ");
            scanf("%d", &b);
            break;
        }
        multiply(a,b);
    }
    else if (n == 3) //Division block
    {
        int a, b;
        char answer;
        printf("Enter the number to divide: ");
        scanf("%d", &a);
        printf("You have entered %d, would you like to change it?(Enter Y or N)", a);
        scanf("%s", &answer);

        while (answer == 'Y')
        {
            printf("Enter the number to divide: ");
            scanf("%d", &a);
            break;
        }

        printf("Enter the number to divide by: ");
        scanf("%d", &b);
        printf("You have entered %d, would you like to change it?(Enter Y or N)", b);
        scanf("%s", &answer);

        while (answer == 'Y')
        {
            printf("Enter the number to divide by: ");
            scanf("%d", &b);
            break;
        }
        divide(a,b);
    }


    return 0;
}

int add(int a, int b)
{
    int Result;
    Result = a + b;
    printf("%d + %d = %d\n", a, b, Result);
}

int subtract(int a, int b)
{
    int Result;
    Result = a - b;
    printf("%d - %d = %d\n", a, b, Result);
}

int multiply(int a, int b)
{
    int Result;
    Result = a*b;
    printf("%d * %d = %d\n", a, b, Result);
}

int divide(int a, int b)
{
    int Result;
    Result = a/b;
    printf("%d / %d = %d\n", a, b, Result);
}