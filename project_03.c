//   SIMPLE CALCULATOR 


#include<stdio.h>

int sum(int x , int y)
{
    printf("The sum of %d and %d is %d" , x , y , x+y);
    return x+y;
}

int product(int x , int y)
{
    printf("The product of %d and %d is %d" , x , y , x*y);
    return x*y;
}

int divide(int x , int y)
{
    printf("The division of %d and %d is %d" , x , y ,x / y);
    return x/y;
}

int subtract(int x , int y)
{
    printf("The subtraction of %d and %d is %d" , x , y , x-y);
    return x-y;
}

int main()
{

    int first_digit, second_digit;
    char operator;

    printf("Enter The first digit:\n");
    scanf("%d", &first_digit);

    printf("Enter operator (+ - / *)\n");
    scanf(" %c", &operator);

    printf("Enter The second digit:\n");
    scanf("%d", &second_digit);

    if (operator == '+')
    {
        sum(first_digit , second_digit);
    }
    else if (operator == '*')
    {
        product(first_digit , second_digit);
    }
    else if (operator == '/')
    {
        divide(first_digit , second_digit);
    }
    else
    {
        subtract(first_digit , second_digit);
    }
    
    return 0;
}



