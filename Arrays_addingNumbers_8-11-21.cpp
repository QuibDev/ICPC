#include <iostream>
using namespace std; 

int addition() {

    int sum = 0;    
    int average = 0;
    int n = 0;

    cout << "Add upto how many numbers? (n)";
    cin >> n;    

    if (n > 0) {    
        int a[n];

        for(int i = 0; i<n; i++ ) 
        {
        cout << "Enter " << (i+1) << "th number: ";
        cin >> a[i];
        sum += a[i];
        }

        cout << "the sum of ";
        for (int i = 0; i<n; i++) {
            cout << " " << a[i] << " " << "+";                    
            
        }

        float average = (float) sum / n;
    

    }

    // array is more memory efficient?     
    // we cannot type cast an array, just elements 
    // c, c++ doesn't support the type casting when taking an input.
    
    return sum, average;
}


int main() {

    int output,average = addition();
    cout << "\nTotal sum: " << output;

    cout << "Average is" << average;

}