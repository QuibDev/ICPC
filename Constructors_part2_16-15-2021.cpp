#include <iostream>
using namespace std;

class Sample{    
    public:
    void disp();
    void disp(int x);
    void disp(int x, int y);

};

void Sample :: disp() {
    cout << "\n First Function \n";
}

void Sample :: disp(int x) {
    cout << "\n Overloaded Function 1\n";
}

void Sample :: disp(int x, int y) {
    cout << "\n Second overloaded function.\n";
}

int main(){
    cout << "\n\n";
    Sample s;
    s.disp();    
    s.disp(10);    
    s.disp(10,15);    
    cout << "\n\n";
}

/*
functions having the same but different list of parameters 
are said to be overloaded functions.
*/