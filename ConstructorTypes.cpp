#include <iostream>
using namespace std;


class defaultConstructor(){
    int a;    
    public:
        void defaultConstructor(){            
            cout << "default constructor";
        }
}

class parameterConstructor(){

    int a;    
    public:
        void parameterConstructor(int x){            
            cout << "parameter constructor";
        }
}

class copyConstructor
{
private:
    int x, y;
public:
    copyConstructor(int x1, int y1) { x = x1; y = y1; }
 
    // Copy constructor
    copyConstructor(const copyConstructor &p1) {x = p1.x; y = p1.y; }
 
    int getX()            {  return x; }
    int getY()            {  return y; }
};
 
