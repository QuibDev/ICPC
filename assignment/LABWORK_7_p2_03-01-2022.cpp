#include<iostream>
using namespace std;

class Books{    
    int Id;
    string Name;
    int Price;
    public:
        void readInfo();
        void Disp();
        int getPrice();
};

void Books:: readInfo(){
    cout << "Book Id: ";
    cin >> Id;
    cout << "Book Name: ";
    cin >> Name;
    cout << "Book Price: ";
    cin >> Price;    
}

void Books:: Disp(){
    cout << "\nBook Id: " << Id;     
    cout << "\nBook Name: " << Name; 
    cout << "\nBook Price: " << Price; 
}

int Books:: getPrice(){
    return Price;
}

//Create an array? 


int main(){

    int n,i;
    n = 3;

    cout << "enter number of books:";
    cin >> n;

    if (n < 1) {
        cout << "\n\nInvalid number of books: ";
    } else {
        class Books b[n];
        cout << "\nEnter details of books: \n";

        for (i=0; i<n;i++){
            cout << "\nEnter detail of book " << i+1 << ": \n";            
            b[i].readInfo();              
            cout << "\n";
        }

        // sorting 

        // sorting based on price of book
        // how to read the price of a book object (it's protected)
        // for comparision in bubblesrot 


        class Books c;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j<n-i-1; j++){
                if (b[j].getPrice() < b[j+1].getPrice()) {
                    c = b[j];
                    b[j] = b[j+1];
                    b[j+1] = c;
                }            
            }
        }

        // sorted list
        cout << "\nsorted in descending";
        for (int i = 0; i<n;i++){
            cout << "\n ";
            b[i].Disp();
            cout << "\n ";
        }

        
    }

}
