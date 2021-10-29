#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter value of n";
    cin >> n;

    for (int i; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i;
        cout << "\n";
        cout << endl;
    };
}