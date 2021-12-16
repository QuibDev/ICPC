#include <iostream>
using namespace std;

class Sample{
    int a = 10;
    public:

        // Default Constructor
        Sample(){
            cout<< "Hello World \n";            
        } 

        // Parameterised Constructor
        Sample(int k) {
            a=k;
        }
        

        void disp(){
            cout << "\n a = "<< a << "\n"; 
        }

};

int main(){
    cout << "\n\n";
    Sample p;
    p.disp();
    Sample q(25);
    q.disp();
    cout << "\n\n";
}

/*
functions having the same but different list of parameters 
are said to be overloaded functions.
*/