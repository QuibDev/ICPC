// 18-11-2021 
//2D matrix

#include <iostream>
using namespace std;

int main(){

    int i,j,m,n;

    cout << "\nEnter number of rows and columns: ";
    cin >> m >> n;
    
    if (m<= 0 || n<=0) {
        cout << "\nInvalid order of matrix";
    }

    else {
        // initialize array
        int a[m][n];

        // code to read
        for (i=0; i<m; i++){
            cout << "Enter element of row" << (i+1);
            for (j=0;j<n;j++){
                cin>>a[i][j];
            }
        }

        // code to display
        for (i=0; i<m; i++){
            cout << "\n";
            for (j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
        }
        cout << "\n\n\n";
        return 0;

    }
}
