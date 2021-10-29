#include <iostream>
using namespace std;

/*
int main()
{

    int i, j;
    int rows, columns;
    char ch;

    cout << "\nEnter value of rows ";
    cin >> rows;

    //rows = 5;
    columns = 5;

    for (i = 1; i <= rows; i++)
    {
        ch = 'A';
        for (j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
};

*/

/*

int main()
{

    int i, j;
    int rows, columns;
    char ch;

    cout << "\nEnter value of rows ";
    cin >> rows;

    //rows = 5;
    columns = 5;

    ch = 'A';
    for (i = 1; i <= rows; i++)
    {        
        for (j = 1; j <= i; j++)
        {            
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
};

*/

int main()
{

    int i, j, k;
    int rows, columns;
    char ch;

    cout << "\nEnter value of rows ";
    cin >> rows;

    //rows = 5;
    columns = 5;

    k = 1;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << "\n";
    }
};