#include <iostream>
using namespace std;



int main(){

    string input1, reversedinput1;
    int match = 0;
    int i;
    

    cout << "\nEnter a string: ";
    cin >> input1;

    int n = input1.length();    

    cout << "\nOriginal string: " << input1;
    cout << "\nstring length: " << input1.length();
    
    cout << "\nstring breakdown:\n ";
    for (i = 0; i<n;i++){
        cout << "\nstart "<< input1[i] <<" tail "<< input1[n-i-1];
        if (input1[i] == input1[n-i-1]){
            match += 1;
        }
        
    }


    if (match == n){
        cout << "\n\nstring: " << input1 << "- is palindrome.";
    }

    cout << "\n\n\n";
}


