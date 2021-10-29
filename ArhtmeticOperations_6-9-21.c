
#include <stdio.h>

void main()
{

    // int %d
    // float %f
    // char %c

    // scanf ("%d", &var ) var is a int variable

    // a,b
    // c = a+b
    // out: sum = c

    // read two numbers and store the value
    // in third and read the answer

    // \t keeps the space of 10 characters

    int a, b;
    printf("Please enter two numbers: \t");

    // & is related to access to memory (stack)
    scanf("%d %d", &a, &b);

    int addition = a + b;

    int reminder = a % b;

    int subtraction = a - b;

    int multiplication = a * b;

    // type casting int to float
    float division = (float)a / b;

    int something = (int)a / b;

    printf("Sum = %d \n", addition);
    printf("Difference = %d \n", subtraction);
    printf("Multiplication = %d \n", multiplication);
    printf("Reminder: %d \n", reminder);
    printf("Division: %0.3f \n", division);

    // int will give int regardless of type add , sub
    // but division changes int type to float,
    // four types of data in C
    // Basic, Derived, Enumeration, Void

    // Basic -->
    //  integer, float, char, double

    // Derived -->
    //  array, pointer, structure, union

    // Enemuration -->
    //  enum

    // Void -->
    //  void

    // array for list basically
    // derived are "derived" from basic
    // void means nothing

    // CLASS 2

    //type of operator
    // arthematic + - * / %
    // logical and, not, or
    // relational == > < >= <=

    // increament or decremant operator (unary operator)
    //       a++ or a--
    //       a++ post fix [bad me]
    //       ++a prefix

    // C NUMERICALS FROM TOMORROW

    // Bitwise operator
    // if you have inputs in terms of binary
    // & logical and
    // | logical or
    // ^ (exclusive OR)
    // ~ compliment - 0 to 1 or 1 to 0
    // << left shift - 1001 << 0010 one bit towards right
    // >> right shift -  1101 >> 0110 one bit towards left

    // False ^ True is false

    // Conditional operator
    //  if & its form
}
