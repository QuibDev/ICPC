#include <stdio.h>

// greatest number using nested if else

/*
void main()
{
    int a, b, c;

    printf("Enter three numbers: \t");

    // input
    scanf("%d %d %d", &a, &b, &c);

    // output
    int greatestNum;

    if (a >= b)
    {
        if (a >= c)
        {
            greatestNum = a;
        }
        else
        {
            greatestNum = c;
        }
    }

    else if (b >= c)
    {
        greatestNum = b;
    }
    else
    {
        greatestNum = c;
    }

    // output

    if (greatestNum)
    {
        printf("%d is the largest number.", greatestNum);
    }
    else
    {
        printf("ERR: Please input a valid combination !");
    }

    return;
}

*/

// read marks / percent and decide the percentage of the

/*
 percentage > 70 FC with disc 
 70 > percentage >=60  fc 
 60 > percentage >=50 sc 
 50 > percentage >= 40 past class 
 40 > percentage atkt / student failed 

*/

/*
int main()
{
    float percentage;
    printf("\n Enter the percentage: ");
    scanf("%f", &percentage);
    if (percentage >= 70)
    {
        printf("First Class with Distinction");
    }
    else if (percentage >= 60 && percentage < 70)
    {
        printf("First Class");
    }
    else if (percentage >= 50 && percentage < 60)
    {
        printf("Second Class");
    }
    else if (percentage >= 40 && percentage < 50)
    {
        printf("Pass Class");
    }
    else
    {
        printf("ATKT");
    }
    printf("\n\n\n");
}

*/

int main()
{
    // submit as

    // warp to read farhenhite and convert it to deg cels display both
    // tc = (tf - 32)*5/9

    float fahrenheit, celcius;

    printf("\nWelcome To Temperature Convertor!");
    printf("\nEnter (farhenhite): ");
    scanf("%f", &fahrenheit);

    celcius = (float)(fahrenheit - 1) * (5.0 / 9.0);

    printf("\nThe temperature in celcius is %0.1f degrees \nThe temperature in farhenhite is %0.1f degrees.", celcius, fahrenheit);
}

/*
<Your Name> LAB Work
write the thing on a piece of paper 
under your name 
*/
