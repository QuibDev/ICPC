#include <iostream>
using namespace std;

bool isPrimeNumber(int num) {

    bool isPrime;

    isPrime = true;

    int f, i;
    f = 1;
    i = 2;

    while (isPrime) {                

            if (num%i == 0) {
                isPrime = false;                                
                break;
            }
            if (i >= num/2)
                break;
            i++;
        }

    return isPrime;
        
} 

int main() {
    int n, i, f, m;

    f = 1;    
    i = 2;

    while (f == 1){ 
        cout << "\nenter a number: ";
        cin >> n;           
        if (n <= 0 )
            cout << "\nInvalid value please try again";                                    
        else {
            break;        
        }
        
    }
        
    m = 2;

    while (m<=n) {        

        if (isPrimeNumber(m)) 
            cout << "\n" << m << " is a prime";         
                    
        m++;
    }

    return 0;
}    
    

