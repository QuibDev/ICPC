#include <iostream>
using namespace std;

int main() {

    int a,b,c,n,i;

    cout << "Enter the number of terms (n): ";
    cin >> n;

    if (n<=0){
        cout << "Please enter a valid number of terms!";
    }

    else {
        a = 0;
        b = 1;
        cout << a << b;

        for (i = 2; i<n; i++) {
            c = a+b;
            cout << c;
            a = b;
            b = c;            
        }
    }

    cout << "\n\n\n";

}