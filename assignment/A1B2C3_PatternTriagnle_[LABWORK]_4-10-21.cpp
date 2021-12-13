#include <iostream>
using namespace std;

/*
int main()
{

    int i, j, k;
    int rows, columns;

    cout << "Enter the number of rows";
    cin >> rows;

    for (i = 1; i <= rows; i++)
    {

        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                cout << "0"
                     << " ";
            }
            else
            {
                cout << "1"
                     << " ";
            }
        }
        cout << "\n";
    }
}

*/

int main()
{

    int i, j, k;
    int rows, columns;
    char ch;

    //cout << "Enter the number of rows";
    //cin >> rows;

    rows = 5;
    k = 1;
    ch = 'A';
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << k << " ";
            cout << ch << " ";
            //cout << j << " ";
            ch++;
            k++;
        }
        cout << "\n";
    }
}