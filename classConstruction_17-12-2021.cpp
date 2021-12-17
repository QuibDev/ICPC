#include <iostream>
using namespace std;


/*wap in c++ to create  two classes A & B 
with methods disp. and show. respectively 
call these methods using objects of respective classes.*/

class A{
    public: 
        void disp(){
            cout << "\nMethod of class A";
        }
};

class B: public A {
    public: 
        void show(){
            cout << "\nMethod of class B";
        }
};

class C: public B {
    public: 
        void calc(){
            cout << "\nMethod of class C";
        }
};

int main(){
    A p;
    B q;
    C r;
    cout << "\nObject of class A\n";
    p.disp();
    cout << "\nObject of class B\n";
    q.show();
    q.disp();
    cout << "\nObject of class C\n";
    r.calc();
    r.show();
    r.disp();
}