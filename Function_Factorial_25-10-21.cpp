#include<iostream>
using namespace std; 

int fact(int x);

int main() { 

    int n, i;
    int f = 1;

    cout << "]nEnter the number: ";
    cin >> n;
    if (n<0) {
        cout << "\nInvalid input";
    }
    else if (n==0)
        cout << "0! = 1";                
    
    else {
        int k = fact(n);
        cout << n <<"! = "<<k;
    }
                            
    cout << n << "\n! = "<<f;
    return 0;
}

int fact(int x) {
    int n, i;
    int f = 1;
    for (i=1;i<=n;i++)
        f = f*i;                            
    cout << n << "\n! = "<<f;
    return f;    
}