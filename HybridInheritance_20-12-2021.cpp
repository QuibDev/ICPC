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

class C: public A {
    public: 
        void calc(){
            cout << "\nMethod of class C";
        }
};

class D: public B{
   public:
    void temp(){
        cout << "\nMethod of class D";
    }
};

int main(){
    B x;
    C y;
    x.disp();
    y.disp();   
}

