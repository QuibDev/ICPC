// 18-11-2021 
//2D matrix

#include <iostream>
using namespace std;


int main(){

    int i,j,m,n,p,q;

    cout << "\nEnter number of rows and columns: ";    
    cin >> m >> n;

    cout << "\nEnter number of rows and columns: ";
    cin >> p >> q;
    
    if (m<= 0 || n<=0 || p<= 0 || q<=0 ) {
        cout << "\nInvalid order of matrix";
    }

    else {
        // initialize array
        int a[m][n];
        int b[p][q];

        // code to read elements of A
        for (i=0; i<m; i++){
            cout << "Enter element of row" << (i+1);
            for (j=0;j<n;j++){
                cin>>a[i][j];
            }
        }

        // code to read elements of B
        for (i=0; i<p; i++){        
            cout << "Enter element of row" << (i+1);
            for (j=0;j<q;j++){
                cin>>b[i][j];
            }
        } 

        if ((m==p) && (n==q)){
            int c[m][n];

            for (i=0;j<n;j++){
                cout<< "\n";
                for (j=0;j<n;j++)
                    c[i][j] = a[i][j] + b[i][j];
                    cout<<c[i][j]<<" ";
            }
        

        // code to display
        for (i=0; i<m; i++){
            cout << "\n";
            for (j=0;j<n;j++){
                cout<<c[i][j]<<" ";
            }
        }
        cout << "\n\n\n";
        return 0;

    }
}
}

// read and display elements of 1D[linear] array 
// by using function
