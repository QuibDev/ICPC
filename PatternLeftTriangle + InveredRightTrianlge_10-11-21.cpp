#include <iostream>
using namespace std;


int main() {
    int i, n, j, l;
    char ch;
    //cout<<"Input number of rows: ";
    //cin>>n;
    n = 5;
    
    for (i = 1; i <= n; i++){
        cout<<"\n";
        for (j=1; j<=i; j++){
            cout<<j;
        }
    }
    for (i =n; i >= 1; i--){
        cout<<"\n";
        for (l = 1; l <= (2*n-i)-1 ; l++){
            cout<< " ";
        }
        for (j=i; j>=1; j--){
            cout<<j;
        }
    }
}