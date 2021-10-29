// a calculator with a switch based menu

#include <stdio.h>

int main()
{
    int a, b, c, ch;
    printf("\n Enter two numbers: ");

    scanf("%d %d", &a, &b);

    printf("\n\nSelect Choice: \n\t1. Add \n\t2. Subtract \n\t3. Multiply \n\t4. Division \n\t5. Remainder");

    printf("\n Input your choice: ");

    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        c = a + b;
        printf("\n Sum=%d", c);
        break;
    case 2:
        c = a - b;
        printf("\n Diff=%d", c);
        break;
    case 3:
        c = a * b;
        printf("\n Product=%d", c);
        break;
    case 4:
        c = (float)a / b;
        printf("\n Division=%0.2f", c);
        break;
    case 5:
        c = a % b;
        printf("\n Remainder=%d", c);
        break;
    default:
        printf("\n Invalid input");
    }

    printf("\n\n\n");
    return 0;
}

/*
We need to have a ICPC copy?
    weird 
lecture notes;

Switch 

*/
