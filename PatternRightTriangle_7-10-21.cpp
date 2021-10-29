#include <iostream>
using namespace std;

int main()
{

    int i, j, k, p;
    int rows, columns;
    char ch;

    
    

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
        for (j = i; j >= 1; j--)
        {
            cout <<  j;            
        }        
        cout << "\n";
    }

    
    //output:
    //    1
    //   12
    // 1234
    //12345
    

};
