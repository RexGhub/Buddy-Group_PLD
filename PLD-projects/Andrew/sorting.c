#include <stdio.h>

int main()
{
int a, b, c, largest, larger, large;
printf("I require 3 numbers.\n");
printf("Enter the first: ");
scanf("%d", &a);
printf("Enter the second: ");
scanf("%d", &b);
printf("Enter the third: ");
scanf("%d", &c);

printf("You have entered %d %d %d in that order\n", a, b, c);

if (a > b && a > c)
{
    // printf("largest is a\n");
    largest = a;
    if (b > c)
    {
        // printf("b is larger\n");
        larger = b;
        large = c;
    }
    else
    {
        // printf("c is larger\n");
        larger = c;
        large = b;
    }
    printf("In decending order, the numbers you have entered are %d %d %d\n", largest, larger, large);
}
else if (b > a && b > c)
{
    // printf("largest is b\n");
    largest = b;
    if (a > c)
    {
        // printf("a is larger\n");
        larger = a;
        large = c;
    }
    else
    {
        // printf("c is larger\n");
        larger = c;
        large = a;
    }
    printf("In decending order, the numbers you have entered are %d %d %d\n", largest, larger, large);
}
else if (c > a && c > b)
{
    // printf("largest is c\n");
    largest = c;
    if (b > a)
    {
        // printf("b is larger\n");
        larger = b;
        large = a;
    }
    else
    {
        // printf("a is larger\n");
        larger = a;
        large = b;
    }
    printf("In decending order, the numbers you have entered are %d %d %d\n", largest, larger, large);
}

return 0;
}