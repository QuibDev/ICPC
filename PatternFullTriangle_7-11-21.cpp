#include <iostream>
using namespace std;


int main()
{

    int i, j, k, p;
    int rows, columns;
    char ch;

    //cout << "\nEnter value of rows ";
    //cin >> rows;

    
    //for printing from the left hand side,
    //    1. take one 
    

    rows = 5;
    columns = 5;

    k = rows;
    for (i = 1; i <= rows; i++)
    {
        k--;

        for (j = 1; j <= k; j++)
        {
            cout << " ";            
        }        
        for (j = 1; j <= i; j++)
        {
            cout << j;            
        }      

        for (j=i-1; j>=1; j--) 
            cout << j;

        cout << "\n";
    }

};