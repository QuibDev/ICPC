/*
1. it happens to be a function with same signature in parent and child class, 
then this function is overriden in child class.

2. for function overriding there is need of parent child relationship 

3. This cannot happen in the same or single class [err. fn already defined]

*/

#include <iostream>
using namespace std;


class A{
    public: 
        void disp(){
            cout << "\nMethod of class A";
        }
};

class B: public A {
    public: 
        void disp(){
            cout << "\nMethod of class B";
        }
        void show(){
            cout << "\nShow method of class B";
        }
};


// same parameters --> overwriting 
// not same parameters but same name --> overloading 

int main(){
    A p;
    B q;
    p.disp(5);
    q.disp();
    q.show();
    cout << "\n\n\n";
}

