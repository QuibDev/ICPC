#include <iostream>
using namespace std;

int main()
{
    int r, m, n, i, o, p;
    char ch;

    cout << "Provide Number Of Rows: ";
    cin >> r;

    ch = 'A';
    o = 1;
    p = 1;
    for (i = 1; i <= r; i++)
    {
        cout << "\n";
        for (m = 1; m <= i; m++)
        {
            if (p % 2 == 0) // p is odd, --> print an alphabet
            {
                cout << ch << " ";
                ch++;
            }
            else // p is even, --> print a number
            {
                cout << o << " ";
                o++;
            }
            p++;
        }
    }
}