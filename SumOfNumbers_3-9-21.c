
#include <stdio.h> // idk why the error -__-

void main()
{
    int x, b, a;
    a = 10;
    b = 20;
    x = a + b;

    printf("sum = %d", x);

    printf("sum = %d %d", x, a);

    // %d , %f etc are called switches
    printf("Sum =%d"); //It gives a random value? junk values

    // switches substitute given variables from left to right order
    printf("%d + %d = %d", a, b, x);

    // but prinft doesn't follow any logic just substitution
    printf("%d + %d = %d", x, b, a);

    // scanf waits for user input
    scanf("%d", &a);

    // [user friendly tip] --> add a statement explanation for input
    scanf("Please enter a number %d", &a);
}