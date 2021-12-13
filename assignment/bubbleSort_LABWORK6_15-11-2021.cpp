<<<<<<< HEAD
// bubbleSort_LABWORK6_15-11-2021

//_15-nov-2021

#include <iostream>
using namespace std;

int main () {

    int n;


    cout << "How many elements? (n): ";
    cin >> n;

    if (n>0){

        int a[n], input;         

        cout << "\nEnter "<< n << " Numbers: ";

        for (int i = 0; i<n;i++){
            cout << "\n"<< (i+1) << "th number: ";
            cin >> input;
            while (input <= 0) {
                cout << "\nNumber " << input << " discarded";
                cout << "\nplease enter a positive number: ";                  
                cin >> input;
            }
            a[i] = input;
        }

        // original list
        cout << "\norginal list";
        for (int i = 0; i<n;i++){
            cout << " " << a[i] << " ";
        }

        // bubble sort

        int c = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j<n-i-1; j++){
                if (a[j] > a[j+1]) {
                    c = a[j];
                    a[j] = a[j+1];
                    a[j+1] = c;
                }            
            }
        }

        // sorted list
        cout << "\nsorted list";
        for (int i = 0; i<n;i++){
            cout << " " << a[i] << " ";
        }

    }


    

=======
// bubbleSort_LABWORK6_15-11-2021

//_15-nov-2021

#include <iostream>
using namespace std;

int main () {

    int n;


    cout << "How many elements? (n): ";
    cin >> n;

    if (n>0){

        int a[n], input;         

        cout << "\nEnter "<< n << " Numbers: ";

        for (int i = 0; i<n;i++){
            cout << "\n"<< (i+1) << "th number: ";
            cin >> input;
            while (input <= 0) {
                cout << "\nNumber " << input << " discarded";
                cout << "\nplease enter a positive number: ";                  
                cin >> input;
            }
            a[i] = input;
        }

        // original list
        cout << "\norginal list";
        for (int i = 0; i<n;i++){
            cout << " " << a[i] << " ";
        }

        // bubble sort

        int c = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j<n-i-1; j++){
                if (a[j] > a[j+1]) {
                    c = a[j];
                    a[j] = a[j+1];
                    a[j+1] = c;
                }            
            }
        }

        // sorted list
        cout << "\nsorted list";
        for (int i = 0; i<n;i++){
            cout << " " << a[i] << " ";
        }

    }


    

>>>>>>> 19954f4d49f553764e83a3920669e4574f49b611
}