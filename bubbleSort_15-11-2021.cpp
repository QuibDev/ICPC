//_15-nov-2021

#include <iostream>
using namespace std;

int main () {

    int n = 5;


    cout << "How many elements? (n): ";
    cin >> n;

    if (n>0){

        int a[n], f, k;         

        for (int i = 0; i<n;i++){
            cout << "Enter "<< n << "Numbers: ";
            cin >> a[i];
        }

        // original list
        for (int i = 0; i<n;i++){
            cout << "orginal list";
            cout << a[i];
        }

        // bubble sort

        for (int i = 0; i < n; i++) {
            for (int j = 0; j<n-i-1; j++){
                if (a[j] < a[j+1]) {
                    int c = a[j];
                    a[j] = a[j+1];
                    a[j+1] = c;
                }            
            }
        }

        // sorted list
        for (int i = 0; i<n;i++){
            cout << "sorted list";
            cout << a[i];
        }

    }


    

}