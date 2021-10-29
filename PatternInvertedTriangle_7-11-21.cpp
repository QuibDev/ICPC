#include <iostream>
using namespace std;

int main()
{

    int i, j, k, p;
    int rows, columns;
    char ch;

    cout << "\nEnter value of rows ";
    cin >> rows;

    //rows = 10;
    columns = 5;

    k = 2*rows;    
    for (i = 1; i <= rows; i++)
    {

        for (j = 1; j <= i; j++)
            cout <<  " ";                                       
        
        for (j = 1; j <= k-2; j++)        
            cout << "*";                     
    
        for (j = i; j >= 1; j--)        
            cout <<  " ";                

        k-=2;    
        cout << "\n";
    }

};
