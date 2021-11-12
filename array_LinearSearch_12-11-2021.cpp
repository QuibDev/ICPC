#include <iostream>
using namespace std;

// because our cin and cout are in system file
// /t leaves 10 spaces


int main() {
    int k,n; 

    cout << "How many elements? (n): ";
    cin >> n;

    if (n>0){
        int a[n], f, k;         

        for (int i = 0; i<n;i++){
            cout << "Enter "<< n << "Numbers: ";
            cin >> a[i];
        }

        f = 1;

        while (f==1) {

            int choice,x;            

            x =1;

            while (x==1){

            cout << "\n1. Search Number: \n2. Quit\n>>";
            cin >> choice; 

            switch (choice){
                case 1:                        
                        cout << "Enter the number to search";
                        cin >> k;

                        f = 1;

                        for (int i = 0; i < n; i++){

                        if (a[i]==k){   
                            cout << "found element "<< k << "at index " << i;
                            f = 0;
                            break;

                                }
                            }
                            if (f == 1 ){
                                cout << "element "<< k <<" not found in the array";
                            
                            }                                              
                    
                        break;

                 case 2:
                    x=0;
                    break;

            }

            
        }
    }


}
}

